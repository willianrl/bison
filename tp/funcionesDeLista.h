#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Nodo
{
	char dato[30];
	struct Nodo *siguiente;
} tipoNodo;

typedef tipoNodo *Lista;

void ingresarSinRepetir(Lista *, char *, int);
void insertarNodoALista(Lista *, char *);
int encontrePalabra(Lista *,char *);
void totalDeIdentificadores(Lista *);
void recorrer(Lista *);
void verificarSiPuede(Lista *);

void mostrarTodo();
