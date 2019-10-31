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
	char identificador[30];
	struct NodO *siguiente;
}VARIABLES;

typedef VARIABLES *Variables;

//////////////////////////////estructura para las funciones//////////////////////////////////////////

typedef struct nodo{
	char tipoDato[10];
	struct nodo *sig;
}PARAMETROS;

typedef PARAMETROS * Parametros;

typedef struct NODO{
	char tipoDato[10];
	char nombreFuncion[20];
	Parametros *parametros;
	struct NODO *sig;
}FUNCIONES;

typedef FUNCIONES *Funciones;

//////////////////////////////estructura para las funciones//////////////////////////////////////////

typedef struct NoDO{
	char tipoDatoA[10];
	char identificadorA[20];
	char tipoDatoB[10];
	char identificadorB[20];
	struct NoDO *siguiente;
}ERRORESSEMANTICOS;

typedef ERRORESSEMANTICOS *Semanticos;

<<<<<<< HEAD

=======
////////////////////////////////Para las Variables//////////////////////////////////////////
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe


void insertarIdentificador(Identificadores *, char *);
void insertarVariable(Semanticos *, Variables *, Identificadores *, char *);
int esVariableNueva(Semanticos *, Variables *, char *, char *);
//void insertarVariableSinRepetir(Variables *, char *);
//int encontrarPalabra(Variables *, char *);
//void insertarVariable(Variables *, char *)

void imprimirVariables(Variables *);


//void recorrer(Lista *);
//void verificarSiPuede(Lista *);



/////////////////////////////////////////Para las Funciones///////////////////////////////////////////////////////////////////////////



void insertarFuncionSinRepetir(Funciones *, char *, char *);
int buscarFuncion(Funciones *, char *);
void insertarFuncion(Funciones *, char *, char *);
void agregarParametros(Parametros *, char *);

void imprimirFunciones(Funciones *);
<<<<<<< HEAD
int buscarFuncion(Funciones *, char *);

/////////////////////////////////////////////////Funciones para el control de tipos de datos////////////////////////////////

void control(int, char, int );

int compararTipos(int, int);
=======

///////////////////////////////////////Para los Errores Semanticos///////////////////////////////////////////////////////////////


void dobleDeclaracion(Semanticos *, char *,char*,char*,char* );
void imprimirDobleDeclaracion(Semanticos *);
void control(int, char, int );

void comparar(int, int, char*);


/////////////////////////////////////////Para Mostrar Todo al Final del .L///////////////////


void informeDeLectura(Variables *, Funciones *, Semanticos *);
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
