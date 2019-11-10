#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//////////////////////////////estructura para las variables//////////////////////////////////////////
typedef struct Nodo{
	char identificador[30];
	struct Nodo *siguiente;
}IDENTIFICADORES;

typedef IDENTIFICADORES *Identificadores;

typedef struct NodO{
	char tipoDato[10];
	int numeroTipoDato;
	char identificador[30];
	struct NodO *siguiente;
}VARIABLES;

typedef VARIABLES *Variables;

//////////////////////////////estructura para las funciones//////////////////////////////////////////

typedef struct nodo{
	char tipoDato[10];
	struct nodo *sig;
}PARAMETROS;

typedef PARAMETROS *Parametros;

typedef struct NODO{
	char tipoDato[10];
	char nombreFuncion[20];
	Parametros *parametros;
	struct NODO *sig;
}FUNCIONES;

typedef FUNCIONES *Funciones;

//////////////////////////////estructura para los errores semanticos//////////////////////////////////////////

typedef struct Nudu{
    int numTipoDatoA;
    char operacion[25];
    int numTipoDatoB;
		int linea;
    struct Nudu *siguiente;
}CONTROLDEDATOS;

typedef CONTROLDEDATOS *ControlDeDatos;

typedef struct Nodu{
    char identificador[20];
    int tipo;
		int linea;
    struct Nodu *siguiente;
}LVALUE;

typedef LVALUE *LValue;


typedef struct NoDO{
	char identificadorA[20];
	int numTipoDatoA;
	char identificadorB[20];
	int numTipoDatoB;
	int linea;
	struct NoDO *siguiente;
}DOBLEDECLARACIONES;

typedef DOBLEDECLARACIONES *DobleDeclaraciones;



////////////////////////////////// estructura para los errores sintacticos /////////////////////////////////////////

typedef struct Nado
{
	char mensajeError[200];
	int linea;
	struct Nado *siguiente;
} ERRORESSINTACTICOS;

typedef ERRORESSINTACTICOS *ErroresSintacticos;

////////////////////////////////Para las Variables//////////////////////////////////////////

void insertarIdentificador(Identificadores *, char *);
void insertarVariable(DobleDeclaraciones *, Variables *, Identificadores *, char *, int);

int esVariableNueva(Variables *, char *);
int tipoDeDatoVariable(Variables *, char *);
//void insertarVariableSinRepetir(Variables *, char *);
//int encontrarPalabra(Variables *, char *);
//void insertarVariable(Variables *, char *)
int transformarTipo(char *);

//void recorrer(Lista *);
//void verificarSiPuede(Lista *);
void imprimirSegunTipo(int);


void imprimirVariables(Variables *);

/////////////////////////////////////////Para las Funciones///////////////////////////////////////////////////////////////////////////



void insertarFuncionSinRepetir(Funciones *, char *, char *);
int buscarFuncion(Funciones *, char *);
void insertarFuncion(Funciones *, char *, char *);
void agregarParametros(Parametros *, char *);

void imprimirFunciones(Funciones *);

///////////////////////////////////////Para los Errores Semanticos///////////////////////////////////////////////////////////////


void insertarDobleDeclaracion(DobleDeclaraciones *, char *, int, int, int );
void imprimirDobleDeclaracion(DobleDeclaraciones *);


void insertarLValue(LValue *, char *, int, int);
void imprimirLValue(LValue *);

void control(ControlDeDatos *, int, char, int, int );
void comparar(ControlDeDatos *, int, int, char*, int);
void insertarControlDeDatos(ControlDeDatos *, int, char *, int, int);
void imprimirControlDeDatos(ControlDeDatos *);



/////////////////////////////////////// Para errores sinctactico /////////////////////////////////////////////

void agregarCola(ErroresSintacticos *, ErroresSintacticos *, char *, int);

void imprimirErrores(ErroresSintacticos *);

/////////////////////////////////////////Para Mostrar Todo al Final del .L///////////////////


void informeDeLectura(Variables *, Funciones *,ControlDeDatos *, LValue *, DobleDeclaraciones *, ErroresSintacticos *);
