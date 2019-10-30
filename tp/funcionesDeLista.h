#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Nodo
{
	char tipoDato[10];
	char dato[30];
	struct Nodo *siguiente;
} tipoNodo;

typedef tipoNodo *Lista;

//////////////////////////////Cosas para funciones//////////////////////////////////////////

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



void ingresarSinRepetir(Lista *, char *,char * , int);
void insertarNodoALista(Lista *, char *,char * );
int encontrarPalabra(Lista *, char *);
void totalDeIdentificadores(Lista *);
void recorrer(Lista *);
void verificarSiPuede(Lista *);

void control(int, char, int );
void comparar(int, int, char*);

void informeDeLectura(Lista *, Funciones *, Lista *);



//////////////////////////////////////////////////Funciones para mostrar funciones y sus parametros ///////////////////////////////////////////////////////////////////////////

void insertarFuncionSinRepetir(Funciones *, char *, char *);

void insertarFuncion(Funciones *, char *, char *);
void agregarParametros(Parametros *, char *);

void imprimirFunciones(Funciones *);
int buscarFuncion(Funciones *, char *);
