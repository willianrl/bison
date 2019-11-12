%{

#include <stdio.h>
#include <stdlib.h> // para el itoa y el malloc
#include <string.h>
#include "funcionesDeLista.h"
#define YYDEBUG 1

extern FILE *yyin;
extern int yylineno;

Variables listaDeVariables = NULL;
Identificadores listaDeIdentificadores = NULL;

Funciones listaFunciones = NULL;

ControlDeDatos listaDeControlDeDatos = NULL;
LValue listaDeLValue = NULL;
DobleDeclaraciones listaDeDobleDeclaraciones = NULL;

ErroresSintacticos inicio = NULL;
ErroresSintacticos fin = NULL;
int band = 1;

int flag_error = 0,
    flag_SentDeclaraciones = 0,
    flag_SentCompuesta = 0,
    flag_SentIteracion = 0,
    flag_SentExpresion = 0,
    flag_SentControl = 0,
    flag_funciones = 0,
    flag_expresion = 0,
    flag_sentencia = 0,
    flag_general = 0,
    flag_if = 0,
    flag_datos = 0,
    flag_bucles = 0;

char *funcion;
char tipoDato[20];
int funcionRepetida = 0;
int lineaDefinicion;

%}

%union {
struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;

}

%token <s> IDENTIFICADOR
%token <s> NUM
%token <s> CCARACTER
%token <s> LITERALESCADENA

%token <s> TIPODATO

%token <s> IF
%token <s> ELSEIF
%token <s> ELSE
%token <s> SWITCH

%token <s> DO
%token <s> WHILE
%token <s> FOR

%token <s> RETURN

%token <s> error

//operadores compuestos
%token <s> OR
%token <s> AND
%token <s> INCREMENTO
%token <s> DECREMENTO
%token <s> SUMAASIGNACION
%token <s> RESTAASIGNACION
%token <s> MULTIASIGNACION
%token <s> DIVASIGNACION
%token <s> RESTOASIGNACION
%token <s> MENORIGUAL
%token <s> MAYORIGUAL
%token <s> IGUALDAD
%token <s> DISTINTO

%type <s> identificadoryAsignacion

%%


input
        : /* vac�o */
        | input line
        ;

line
        : '\n'                                     { flag_error=0; }
        | declaracionyDefinicionDeFunciones input  { flag_error=0; }
        | sentencia input                          { flag_general=0; flag_error=0; }
        | error input                              { flag_error=0;  }
        ;






//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   EXPRESIONES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_expresion listaidentificador


expresion
        : expBinaria
        | expPostfijo operAsignacion {if($<s.tipo>1 == 4) { if(esVariableNueva(&listaDeVariables,$<s.cadena>1)) {  insertarLValue(&listaDeLValue,$<s.cadena>1,1, yylineno)  ;} } else{ insertarLValue(&listaDeLValue,$<s.cadena>1,2, yylineno); } } expresion 																//{ if( $<s.tipo>1 != 4  ){ printf("Se esperaba un lvalue para la asignacion\n"); } }
        | error { agregarCola(&inicio, &fin, "expresion no reconocida", yylineno); flag_expresion = 1; }
        ;

operAsignacion
              : '='
              | SUMAASIGNACION
              | RESTAASIGNACION
              | MULTIASIGNACION
              | DIVASIGNACION
              | RESTOASIGNACION
              | error   { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; }
              ;

expBinaria
          : expUnaria
          | expUnaria operBinario expBinaria   		{       if($<s.tipo>1 == 4 && $<s.tipo>3 == 4)
                                                                {       
                                                                        if(esVariableNueva(&listaDeVariables, $<s.cadena>1) && esVariableNueva(&listaDeVariables, $<s.cadena>3)) { insertarLValue(&listaDeLValue, $<s.cadena>1, 1, yylineno); insertarLValue(&listaDeLValue, $<s.cadena>3, 1, yylineno); } 
                                                                        else if(esVariableNueva(&listaDeVariables, $<s.cadena>1)){ insertarLValue(&listaDeLValue, $<s.cadena>1, 1, yylineno)  ; }
                                                                        else if(esVariableNueva(&listaDeVariables, $<s.cadena>3)){ insertarLValue(&listaDeLValue, $<s.cadena>3, 1, yylineno)  ; }
                                                                        else{ control(&listaDeControlDeDatos, tipoDeDatoVariable(&listaDeVariables, $<s.cadena>1), $<s.caracter>2, tipoDeDatoVariable(&listaDeVariables, $<s.cadena>3), yylineno); }    /*Aqui*/  
                                                                } 
                                                                else if($<s.tipo>1 == 4)
                                                                {       
                                                                        if(esVariableNueva(&listaDeVariables, $<s.cadena>1)) { insertarLValue(&listaDeLValue, $<s.cadena>1, 1, yylineno)  ; } 
                                                                        else { control(&listaDeControlDeDatos, tipoDeDatoVariable(&listaDeVariables, $<s.cadena>1), $<s.caracter>2, $<s.tipo>3, yylineno ); }   
                                                                } 
                                                                else if($<s.tipo>3 == 4)
                                                                {    
                                                                        if(esVariableNueva(&listaDeVariables, $<s.cadena>3)) { insertarLValue(&listaDeLValue, $<s.cadena>3, 1, yylineno)  ; } 
                                                                        else { control(&listaDeControlDeDatos, $<s.tipo>1, $<s.caracter>2, tipoDeDatoVariable(&listaDeVariables, $<s.cadena>3), yylineno); }          
                                                                } 
                                                                else 
                                                                {    
                                                                        control(&listaDeControlDeDatos, $<s.tipo>1, $<s.caracter>2, $<s.tipo>3, yylineno);       
                                                                }  
                                                        }//  es: %s operador %c elemento %s",$<s.cadena>1, $<s.caracter>2, $<s.cadena>3 ); }  //
          ;

operBinario
            : OR
            | AND
            | '<'
            | '>'
            | MENORIGUAL
            | MAYORIGUAL
            | DISTINTO
            | IGUALDAD
            | '+'
            | '-'
            | '*'
            | '/'
            | '%'
            | error  { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; }
            ;

expUnaria
          : expPostfijo
          | operUnario expUnaria
          | incremento expUnaria
          | expUnaria incremento
          ;

incremento
            : INCREMENTO
            | DECREMENTO
            | error     { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; }
            ;

operUnario
            : '&'
            | '*'
            | '!'
            | error        { agregarCola(&inicio, &fin, "Un \"OPERADOR\" no es valido", yylineno); flag_expresion = 1; }
            ;

expPostfijo
            : expPrimaria
            | expPostfijo '[' expresion ']'
            | expPostfijo '(' listaDeArgumentos ')'
            ;

listaDeArgumentos
                  : expresion
                  | listaDeArgumentos ',' expresion
                  | /* vacio */
                  ;

expPrimaria
            : NUM
            | '(' expresion ')'
            | CCARACTER
            | LITERALESCADENA
            | IDENTIFICADOR
            | error  { flag_expresion = 1; agregarCola(&inicio, &fin, "No se reconocio la \"CATEGORIA LEXICA\"\n", yylineno); }
            ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_sentencia

sentencia
          : sentCompuesta         { if(flag_SentCompuesta == 0) { flag_general = 0; }   else { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA COMPUESTA\"", lineaDefinicion);       flag_SentCompuesta = 0; flag_general = 1;} }
          | sentExpresion         { if(flag_SentExpresion == 1) { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE EXPRESION\"", lineaDefinicion);                                       flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } }
          | sentSeleccion         { if(flag_SentControl == 1)  { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE CONTROL\"", lineaDefinicion);                                          flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } }
          | sentIteracion         { if(flag_SentIteracion == 1)  { agregarCola(&inicio, &fin, "Error al declarar la \"SENTENCIA DE ITERRACION\"", lineaDefinicion);                                     flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } }
          | sentenciaDeclaracion  { if(flag_SentDeclaraciones == 1)  { agregarCola(&inicio, &fin, "Error al \"DECLARAR VARIABLES\"", lineaDefinicion);                                                  flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} }
          | RETURN expOP ';'      { if(flag_error == 1){ agregarCola(&inicio, &fin, "Se esperaba una expresion", lineaDefinicion); } }
          ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS COMPUESTAS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_SentCompuesta

sentCompuesta
              : '{' {lineaDefinicion = yylineno;} opcionSalto listaSentencias '}' { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  }}
              ;

listaSentencias
              : sentencia opcionSalto listaSentencias
              | sentencia opcionSalto
              | /* vac�o */ 
              ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS ExPRESION  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


sentExpresion
              : expresion ';' { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; } lineaDefinicion = yylineno; }
               // | expresion opcionSalto { {printf("Falto un caracter de corte\n"); }  flag_SentExpresion = 1;  }
              ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  SENTENCIA CONTROL IF ELSE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_if

sentSeleccion
              : IF     { lineaDefinicion = yylineno; } condicional sentCompuesta  {if(flag_general==1){flag_if=1;}} estructura  {if(flag_if == 1){ flag_if=0; flag_SentControl=1; }}
	      | SWITCH { lineaDefinicion = yylineno; } condicional sentCompuesta  {if(flag_general==1){flag_if=1;}} {if(flag_if == 1){ flag_if=0; flag_SentControl=1; }}
              ;

estructura
            : ELSEIF { if(flag_if == 0 ){ lineaDefinicion = yylineno; } } condicional sentCompuesta { if(flag_general==1){flag_if=1;} } estructura
            | ELSE   { if(flag_if == 0){  lineaDefinicion = yylineno; } }  sentCompuesta { if(flag_general==1){flag_if=1;} }
            | /* vacio */
            ;
condicional
            : '(' expresion { if(flag_expresion==1){flag_expresion=0;flag_if=1;} } ')' 
            | '(' ')'   { if(flag_expresion==1){flag_expresion=0;flag_if=1;} agregarCola(&inicio, &fin, "Se esperaba una expresion primaria", yylineno); }
            ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  SENTENCIA BUCLES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_bucles

sentIteracion
                : FOR    { lineaDefinicion = yylineno; }      '(' expOrDeclaracion ';' expOP ';' expOP ')' sentCompuesta  {if(flag_general==1){flag_bucles=1;}}   {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}
                | WHILE  { lineaDefinicion = yylineno; }    '(' expresion  {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;}} ')' sentCompuesta  {if(flag_general==1){flag_bucles=1;}} {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}
                | WHILE '(' ')' { agregarCola(&inicio, &fin, "Se esperaba una expresion primaria", yylineno); lineaDefinicion = yylineno; }  error '}' { flag_SentIteracion=1; }
                | DO     { lineaDefinicion = yylineno; } sentCompuesta {if(flag_general==1){flag_bucles=1;}} WHILE '(' expresion {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;}}  ')' ';'   {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}
                ;

expOrDeclaracion
                  : TIPODATO IDENTIFICADOR '=' expresion    { if(flag_expresion == 1){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; flag_expresion = 0; } }
                  | expOP
                  | error                                   { if(flag_bucles == 0 && flag_bucles == 0){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; } }
                  ;

expOP
        : expresion                                         { if(flag_expresion == 1 && flag_bucles == 0){ agregarCola(&inicio, &fin, "Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"", yylineno); flag_bucles = 1; flag_expresion = 0; } }
        | /* vac�o */
        ;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIA DECLARACION DE DATOS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_SentDeclaraciones

sentenciaDeclaracion
                      : TIPODATO listaDeIdentificadores { lineaDefinicion = yylineno; if(flag_datos == 0){ strcpy(tipoDato, $<s.cadena>1); } } finalizador { if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;}}    { insertarVariable(&listaDeDobleDeclaraciones, &listaDeVariables, &listaDeIdentificadores, $<s.cadena>1, yylineno); } 																
                      ;


listaDeIdentificadores
                        : identificadoryAsignacion
                        | listaDeIdentificadores ',' identificadoryAsignacion
                        ;

identificadoryAsignacion
                          : IDENTIFICADOR                     					{ if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, $<s.cadena>1); } }
                          | IDENTIFICADOR '=' expresion         				{ if(flag_datos == 0){ insertarIdentificador(&listaDeIdentificadores, $<s.cadena>1); } }
						            //  | NUM opcional 																										{ printf(" error LValue \n"); flag_datos = 1;}
                          | error                                     				{ if(flag_datos == 0){ agregarCola(&inicio, &fin, "Falta IDENTIFICADOR", yylineno); flag_datos = 1;} }
                          ;

//printf("Se declaro el IDENTIFICADOR \"%s\"\n", $1);
//opcional
//          : '[' ']'
//         | '[' NUM ']'
//          | /* VACIO */
//          ;

finalizador
            : ';'  				
            | error 	{ if(flag_datos == 0){ agregarCola(&inicio, &fin, "Falto el caracter de corte", yylineno); flag_datos = 1;} }
            ;

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

declaracionyDefinicionDeFunciones
                                  : TIPODATO IDENTIFICADOR '(' { funcionRepetida = buscarFuncion(&listaFunciones, $<s.cadena>2); insertarFuncionSinRepetir(&listaFunciones, $<s.cadena>1, $<s.cadena>2); lineaDefinicion= yylineno; } parametros cuerpo { if(flag_funciones == 1){  agregarCola(&inicio, &fin, "Se definio/declaro incorrectamente la funcion", lineaDefinicion); flag_funciones = 0; funcionRepetida = 0;} }
                                  | error '(' ')' { lineaDefinicion = yylineno; } cuerpo { agregarCola(&inicio, &fin, "Se definio/declaro incorrectamente la funcion", lineaDefinicion); flag_funciones = 0; }
                                  ;

parametros
            :  listaDeParametros  ')'  {        if(flag_funciones == 1)
                                                { 
                                                        agregarCola(&inicio, &fin, "Se declararon incorrectamente los parametros de la funcion", lineaDefinicion);  
                                                } 
                                        }
            |   ')'             
            ;

listaDeParametros
                  : parametro
                  | listaDeParametros ',' parametro
                  ;

parametro
          : TIPODATO IDENTIFICADOR     { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, $<s.cadena>1); } }
          | TIPODATO                   { if(funcionRepetida == 0){ agregarParametros(&(*listaFunciones).parametros, $<s.cadena>1); }  }
          | error                      { if(flag_funciones == 0) { agregarCola(&inicio, &fin, "Valor no reconocido para asignar ", yylineno); } flag_funciones = 1; }
          ;

cuerpo
        : ';'                           { funcion = "declaro"; }
        | sentCompuesta                 { if(flag_general == 1){flag_general = 0; flag_funciones = 1; }; funcion = "definio"; }
        | error                         { agregarCola(&inicio, &fin, "Se esperaba un punto y como o una sentencia compuesta\n", yylineno); flag_funciones = 1; }
        ;


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  DECLARACION Y DEFINICION DE FUNCIONES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag a utilizar   flag_funciones




opcionSalto
            : '\n'
            | opcionSalto '\n'
            | /*vacio*/
            ;

%%

int main()
{
    //yydebug = 1;
    yyin = fopen("gramatica.txt", "r");
    yyparse();

    informeDeLectura(&listaDeVariables, &listaFunciones, &listaDeControlDeDatos, &listaDeLValue, &listaDeDobleDeclaraciones, &inicio);
    //printf("-----------------------\n\n\nfin\n\n------------------------");
    printf("\n\n\n\n");
}
