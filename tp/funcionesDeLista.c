#include "funcionesDeLista.h"
#define CARACTER 1
#define CADENA 2
#define NUMERO 3


void ingresarSinRepetir(Lista *lista, char *palabra, char *tipoDato, int lugar)
{
    //printf("se va ha insertar la palabara %s y esta asociado a la posicion %d \n",palabra,posicion);
    if (encontrarPalabra(lista, palabra)){
        printf("\nLa \"VARIABLE\" \"%s\" ha sido declarada anteriormente\n", palabra);
    }
    else {
        //printf("se va ha insertar la palabara %s en la posicion %d \n",palabra,posicion);
        insertarNodoALista(lista, palabra, tipoDato);
        if(lugar == 1)
            printf("\nSe ha declaro la variable \"%s\"\n", palabra);
        if(lugar == 2)
            printf("\nInicializado a la variable \"%s\"\n", palabra);
    }
}

void insertarNodoALista(Lista *lista, char *palabra,  char *tipoDato)
{
    Lista nuevo_nodo = (Lista)malloc(sizeof(tipoNodo));
    strcpy(nuevo_nodo->tipoDato, tipoDato);
    strcpy(nuevo_nodo->dato, palabra);
    //printf("el valor del nodo dato es: %s y de posicion %d \n ",nuevo_nodo->dato,nuevo_nodo->pos);
    nuevo_nodo->siguiente = *lista;
    *lista = nuevo_nodo;
}

int encontrarPalabra(Lista *lista, char *palabra)
{
    Lista actual = *lista;

    while(actual!=NULL)
    {
        if(strcmp(actual->dato, palabra) == 0)
        {
            //printf("Encontre %s == %s\n",actual->dato,palabra);
            return 1;
        }
        actual = actual->siguiente;
    }
    return 0;
}

void totalDeIdentificadores(Lista *lista)
{
    int cantidad = 0;
    Lista actual = *lista;
    while(actual!=NULL)
    {
        actual=actual->siguiente;
        cantidad++;
    }
    printf("Cantidad de identificadores : %d ...\n", cantidad);
}

void recorrer(Lista *lista)
{
    Lista actual = *lista;
    while(actual!=NULL)
    {
        printf("-\"%s\" de tipo: \"%s\"\n", actual->dato, actual->tipoDato);
        actual=actual->siguiente;
    }
}

void verificarSiPuede(Lista *lista)
{
    Lista actual = *lista;

    int valorEntreCorchetes;
    int tamanioDePalabra;

    valorEntreCorchetes = atoi(actual->siguiente->dato);
    tamanioDePalabra = (strlen(actual->dato))-2;//menos 2 por las dos comillas

    //printf("valor entre corchetes %s transformado en: %d \n",actual->siguiente->dato,atoi(actual->siguiente->dato));
    //printf("palabra: %s tamanio de la palabra es: %d \n",actual->dato ,strlen(actual->dato));
    lista = NULL;

    if(valorEntreCorchetes > tamanioDePalabra)
    {
        printf("Perfecto\n");
    }
    else if(valorEntreCorchetes == tamanioDePalabra)
    {
        printf("Falta un espacio de memoria para el \"/0\"\n");
    }
    else
    {
        printf("Error semantico\ndebe agregar %d bloques para que funcione correctamente\n",tamanioDePalabra - valorEntreCorchetes);
    }
}

void control(int tipoA, char operacion, int tipoB)
{
    switch(operacion)
    {
    case '+':
        comparar(tipoA, tipoB, "suma");
        break;
    case '-':
        comparar(tipoA, tipoB, "resta");
        break;
    case '*':
        comparar(tipoA, tipoB, "multiplicion");
        break;
    case '/':
       comparar(tipoA, tipoB, "divicion");
        break;
    }

}

void comparar(int tipoA, int tipoB, char *operacion)
{
        if(tipoA == CADENA){
            printf("No se puede realizar una %s con un string\n", operacion);
        }
        else if(tipoB == CADENA){
            printf("No se puede realizar una %s con un string\n", operacion);
        }
        else{
            printf("Bien\n");
        }
}







void informeDeLectura(Lista *listaid, Lista *listaDeFunciones, Lista *listaErrores)
{
    identificadores(listaid);
    funciones(listaDeFunciones);
    errores(listaErrores);
}


void identificadores(Lista *listaid)
{

    printf("\n\n------------------------------Lista de IDENTIFICADORES declarados------------------------------\n\n");
    recorrer(listaid);
}


void funciones(Lista *listaFunciones)
{

    printf("\n\n------------------------------Lista de FUNCIONES declaradas------------------------------\n\n");

    Lista actual = *listaFunciones;
    while(actual!=NULL)
    {
        printf("-\"%s\" devuelve un valor de tipo \"%s\"\n", actual->dato, actual->tipoDato);
        actual=actual->siguiente;
    }

}


void errores(Lista *listaErrores)
{

}
