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

void ingresarSinRepetir(Lista *, char *,char * , int);
void insertarNodoALista(Lista *, char *,char * );
int encontrarPalabra(Lista *, char *);
void totalDeIdentificadores(Lista *);
void recorrer(Lista *);
void verificarSiPuede(Lista *);

void control(int, char, int );
void comparar(int, int, char*);

void informeDeLectura(Lista *, Lista *, Lista *);
