#include "funcionesDeLista.h"
#define CARACTER 1
#define CADENA 2
#define NUMERO 3


void ingresarSinRepetir(Lista *lista, char *palabra, int lugar)
{
    //printf("se va ha insertar la palabara %s y esta asociado a la posicion %d \n",palabra,posicion);
    if (encontrePalabra(lista,palabra)){
        printf("La \"VARIABLE\" \"%s\" ha sido declarada anteriormente\n",palabra);
    }
    else {
        //printf("se va ha insertar la palabara %s en la posicion %d \n",palabra,posicion);
        insertarNodoALista(lista,palabra);
        if(lugar == 1)
            printf("Se ha declaro la variable \"%s\"\n",palabra);
        if(lugar == 2)
            printf("Inicializado a la variable \"%s\"\n",palabra);
    }
}

void insertarNodoALista(Lista *lista, char *palabra)
{
    Lista nuevo_nodo = (Lista)malloc(sizeof(tipoNodo));
    strcpy(nuevo_nodo->dato,palabra);
    //printf("el valor del nodo dato es: %s y de posicion %d \n ",nuevo_nodo->dato,nuevo_nodo->pos);
    nuevo_nodo->siguiente = *lista;
    *lista = nuevo_nodo;
}

int encontrePalabra(Lista *lista, char *palabra)
{
    Lista actual = *lista;

    while(actual!=NULL)
    {
        if(strcmp(actual->dato,palabra) == 0)
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
    printf("Cantidad de identificadores : %d ...\n",cantidad);
}

void recorrer(Lista *lista)
{
    Lista actual = *lista;
    while(actual!=NULL)
    {
        printf("Dato del nodo: %s\n",actual->dato);
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
        comparar(tipoA, tipoB, "sumar");
        break;
    case '-':
        comparar(tipoA, tipoB, "restar");
        break;
    case '*':
        comparar(tipoA, tipoB, "multiplicar");
        break;
    case '/':
       comparar(tipoA, tipoB, "dividir");
        break;
    }

}

void comparar(int tipoA, int tipoB, char *operacion)
{
     if((tipoA == CARACTER && tipoB == CARACTER) || (tipoA == NUMERO && tipoB == NUMERO) || (tipoA == NUMERO && tipoB == CARACTER) || (tipoA == CARACTER && tipoB == NUMERO) )
        {
            printf("bien\n");
        }
        else if((tipoA == CARACTER && tipoB == CADENA) || (tipoA == CADENA && tipoB == CARACTER))
        {
            printf("Error, no se puede %s un caracter con un string\n", operacion);
        }
        else if((tipoA == NUMERO && tipoB == CADENA) || (tipoA == CADENA && tipoB == NUMERO))
        {
            printf("Error, no se puede %s un numero con un string\n", operacion);
        }
        else
        {
            printf("No se pueden %s strings\n", operacion);
        }
}







void mostrarTodo()
{
    printf("\n\njejeje todo\n\n");
}
