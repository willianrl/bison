%{

#include <stdio.h>
#include <stdlib.h> // para el itoa y el malloc
#include "funcionesDeLista.h"
#define YYDEBUG 1

extern FILE *yyin;

Lista listaIdentificador = NULL,lista = NULL;

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

%}

%union {
struct{
  char cadena[30];
  char caracter;
  int entero;
  int tipo;
}s;

}

%token <s> NUM
%token <s> TIPODATO
%token <s> IDENTIFICADOR
%token <s> IF
%token <s> ELSEIF
%token <s> ELSE
%token <s> SWITCH
%token <s> DO 
%token <s> WHILE 
%token <s> FOR
%token <s> RETURN
%token <s> CCARACTER
%token <s> LITERALESCADENA
%token <s> AUTOASIGNACION
%token <s> COMPARACION
%token <s> error

%type <s> identificadoryAsignacion

%%

input:    /* vac�o */
        | input line
;
line:     '\n'                                    { flag_error=0; printf("\n"); }
        | declaracionyDefinicionDeFunciones '\n'  { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); }
        | sentencia '\n'                          { flag_general=0; flag_error=0;                         printf("\n----------------------------------------------------------------------------------\n"); }
        | expresion '\n'                          { flag_error=0;                                         printf("\n----------------------------------------------------------------------------------\n"); }
        | error '\n'                              { flag_error=0; printf("No se reconocio la entrada\n"); printf("\n----------------------------------------------------------------------------------\n"); }
;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   EXPRESIONES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_expresion


expresion : expAsignacion
          | error  { flag_expresion = 1; }
;
expAsignacion :   expUnaria operAsignacion expAsignacion
                | expBinaria
;
operAsignacion : '=' | AUTOASIGNACION | error   { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; }
; 
expBinaria :  expUnaria operBinario expBinaria     { control( $<s.tipo>1, $<s.caracter>2, $<s.tipo>3); }
            | expUnaria
;
operBinario :    
            '|' '|' | '&' '&' 
            | COMPARACION
            | '+' | '-'
            | '*' | '/' | '%'
            | error  { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; }
;
expUnaria :   expPostfijo
            | operUnario expUnaria
            | incremento expUnaria
            | expUnaria incremento
;
incremento :  '+' '+' | '-' '-' | error     { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; };
operUnario :  '&' | '*' | '!' | error        { printf("Un \"OPERADOR\" no es valido\n"); flag_expresion = 1; };

expPostfijo :     expPrimaria
                | expPostfijo '[' expresion ']'
                | expPostfijo '(' listaDeArgumentos ')'
;
listaDeArgumentos :   expresion
                    | listaDeArgumentos ',' expresion
                    | /* vacio */
;
expPrimaria :     NUM
                | '(' expresion ')'
                | CCARACTER
                | LITERALESCADENA
                | IDENTIFICADOR
                | error  { printf("No se reconocio la \"CATEGORIA LEXICA\"\n"); flag_expresion = 1; }
;





//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_sentencia

sentencia:    sentCompuesta         { if(flag_SentCompuesta == 0) { printf("Se declaro correctamente una \"SENTENCIA COMPUESTA\"\n"); flag_general = 0; }     else { printf("Error al declarar la \"SENTENCIA COMPUESTA\"\n");      flag_SentCompuesta = 0; flag_general = 1;} }
            | sentExpresion         { if(flag_SentExpresion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE EXPRESION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE EXPRESION\"\n");   flag_SentExpresion = 0; flag_sentencia = 1; flag_general = 1; } } 
            | sentSeleccion         { if(flag_SentControl == 0)   { printf("Se declaro correctamente una \"SENTENCIA DE CONTROL\"\n"); }    else { printf("Error al declarar la \"SENTENCIA DE CONTROL\"\n");     flag_SentControl = 0; flag_sentencia = 1; flag_general = 1; } }
            | sentIteracion         { if(flag_SentIteracion == 0) { printf("Se declaro correctamente una \"SENTENCIA DE ITERACION\"\n"); }  else { printf("Error al declarar la \"SENTENCIA DE ITERRACION\"\n");  flag_SentIteracion = 0; flag_sentencia = 1; flag_general = 1; } } 
            | sentenciaDeclaracion  { if(flag_SentDeclaraciones == 0){ printf("Se \"DECLARARON VARIABLES\" correctamente\n"); }             else { printf("Error al \"DECLARAR VARIABLES\"\n");                   flag_SentDeclaraciones = 0; flag_sentencia = 1; flag_general = 1;} }
            | RETURN expOP ';'      { if(flag_error == 0){ printf("Se declaro una sentencia de salto (RETURN) \n"); } }
            | error                 { if(flag_error == 0){ printf("Error al declarar una sentencia\n"); flag_error = 1; } }
;


         

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS COMPUESTAS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_SentCompuesta

sentCompuesta :  '{' listaSentencias '}' { if(flag_sentencia == 1){ flag_sentencia = 0; flag_SentCompuesta = 1;  }}
;
listaSentencias :   listaSentencias sentencia
                  | sentencia             
                  | /* vac�o */  {printf("No se declarado sentencias\n");}                  
;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIAS ExPRESION  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


sentExpresion :   expresion ';'   { if(flag_expresion == 1){ flag_SentExpresion = 1; flag_expresion = 0; }} 
                | expresion '\n'  { {printf("Falto un caracter de corte\n"); }  flag_SentExpresion = 1;  } 
;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  SENTENCIA CONTROL IF ELSE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_if

sentSeleccion : IF     { printf("Se declaro una sentencia \"IF\"\n"); }     '(' expresion {if(flag_expresion==1){flag_expresion=0;flag_if=1;}} ')' sentCompuesta {if(flag_general==1){flag_if=1;}} estructura {if(flag_if == 1){ flag_if=0; flag_SentControl=1; }}
					    | SWITCH { printf("Se declaro una sentencia \"SWITCH\"\n"); } '(' expresion {if(flag_expresion==1){flag_expresion=0;flag_if=1;}} ')' sentCompuesta {if(flag_general==1){flag_if=1;}} {if(flag_if == 1){ flag_if=0; flag_SentControl=1; }}           
;
estructura :  ELSEIF { if(flag_if == 0 ){ printf("Se declaro una sentencia \"ELSE IF\"\n"); } } '(' expresion {if(flag_expresion==1){flag_expresion=0;flag_if=1;}} ')' sentCompuesta {if(flag_general==1){flag_if=1;}} estructura
            | ELSE   { if(flag_if == 0){ printf("Se declaro una sentencia \"ELSE\"\n"); } }  sentCompuesta {if(flag_general==1){flag_if=1;}}    
            | /* vacio */
;





//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  SENTENCIA BUCLES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//flag_bucles

sentIteracion :   FOR    { printf("Se declaro un bucle \"FOR\"\n"); }      '(' expOrDeclaracion ';' expOP ';' expOP ')' sentCompuesta  {if(flag_general==1){flag_bucles=1;}}   {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}
                | WHILE  { printf("Se declaro un bucle \"WHILE\"\n"); }    '(' expresion  {if(flag_expresion==1){flag_expresion=0;flag_bucles=1;}} ')' sentCompuesta  {if(flag_general==1){flag_bucles=1;}} {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}                               
                | DO     { printf("Se declaro un bucle \"DO WHILE\"\n"); } sentCompuesta {if(flag_general==1){flag_bucles=1;}} WHILE '(' expresion {if(flag_expresion ==1){flag_expresion=0;flag_bucles=1;}}  ')' ';'   {if(flag_bucles == 1){flag_bucles=0; flag_SentIteracion=1; }}                   
;
expOrDeclaracion:   TIPODATO IDENTIFICADOR '=' expresion    { if(flag_expresion == 1){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; ingresarSinRepetir(&listaIdentificador, $<s.cadena>1, 2); } }           
                  | expOP
                  | error                                   { if(flag_bucles == 0 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; } }
;
expOP :   expresion                                         { if(flag_expresion == 1 && flag_bucles == 0){ printf("Un parametro no fue reconocido en la \"SENTENCIA DE ITERRACION\"\n"); flag_bucles = 1; flag_expresion = 0; } } 
        | /* vac�o */     
;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SENTENCIA DECLARACION DE DATOS  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag_SentDeclaraciones 

sentenciaDeclaracion :  TIPODATO listaDeIdentificadores { if(flag_datos == 0){ printf("Varibles de tipo \"%s\"\n", $<s.cadena>1); } } finalizador 		{ if(flag_datos==1){flag_datos = 0; flag_SentDeclaraciones = 1;}}                       
                      | error finalizador 																										{ printf("Falto el TIPO DE DATO\n"); flag_datos = 1; }
;
listaDeIdentificadores :  identificadoryAsignacion
                        | listaDeIdentificadores ',' identificadoryAsignacion
;
identificadoryAsignacion:   IDENTIFICADOR opcional                    											{ if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, $<s.cadena>1, 1); } }                             
                          | IDENTIFICADOR opcional '=' expresion         										{ if(flag_datos == 0){ ingresarSinRepetir(&listaIdentificador, $<s.cadena>1, 2); } }
						              | NUM opcional 																										{ printf(" errror LValue \n"); flag_datos = 1;}
                          | error                                     											{ if(flag_datos == 0){ printf("Falta IDENTIFICADOR\n"); flag_datos = 1;} }                                          
;
//printf("Se declaro el IDENTIFICADOR \"%s\"\n", $1); 
opcional :  '[' ']'
          | '[' NUM ']'                                                                                                                
          | /* VACIO */
;
finalizador:  ';' 
            |  error 																															{ if(flag_datos == 0){ printf("Falto el caracter de corte\n"); flag_datos = 1;} }                                                                                                                              
;




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  DECLARACION Y DEFINICION DE FUNCIONES  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// flag a utilizar   flag_funciones 

declaracionyDefinicionDeFunciones :   TIPODATO IDENTIFICADOR { printf("Se identifico a la funcion \"%s\" de tipo \"%s\"\n", $<s.cadena>2, $<s.cadena>1); } parametros cuerpo { if(flag_funciones == 0){ printf("Se %s correctamente la funcion: \"%s\"\n", funcion, $<s.cadena>2); } else { printf("Se definio/declaro incorrectamente la funcion \"%s\"\n", $<s.cadena>2); flag_funciones = 0; } } 
                                    | error '(' ')' cuerpo { printf("Se definio/declaro incorrectamente la funcion\n"); flag_funciones = 0; }                                              
;
parametros :  '(' listaDeParametros ')'  { if(flag_funciones == 0){ printf("Se declararon los parametros de la funcion correctamente\n"); } else{ printf("Se declararon incorrectamente los parametros de la funcion\n"); } }
            | '(' ')'                    { if(flag_funciones == 0){ printf("No se declararon parametros para la funcion\n"); } } 
;
listaDeParametros :  parametro
                   | listaDeParametros ',' parametro
;
parametro :   TIPODATO IDENTIFICADOR 
            | TIPODATO 
            | error                      { flag_funciones = 1; }

;

cuerpo:   ';'                           { funcion = "declaro"; }
        | sentCompuesta                 { if(flag_general ==1){flag_general =0; flag_funciones = 1; }; funcion = "definio"; }
        | error                         { printf("Se esperaba un punto y como o una sentencia compuesta\n"); flag_funciones = 1; }
;


%%

int main(){
    //yydebug = 1;
    yyin = fopen("archivo.txt", "r");
	
    yyparse();
	mostrarTodo();
}
