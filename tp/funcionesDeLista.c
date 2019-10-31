#include "funcionesDeLista.h"
#define NOVALIDO 0
#define CARACTER 1
#define CADENA 2
#define NUMERO 3
#define ID 4
#define FLOAT 5

//==================  Funciones para las declaraciones de variables ======================================

void insertarIdentificador(Identificadores *lista, char *identifica)
{
    Identificadores nuevo_nodo = (Identificadores)malloc(sizeof(IDENTIFICADORES));

    strcpy(nuevo_nodo->identificador, identifica);

    nuevo_nodo->siguiente = *lista;
	*lista = nuevo_nodo;
}

void insertarVariable(Semanticos *error, Variables *listaV, Identificadores *listaI, char *tipo)
{
    Identificadores actual;
    while(*listaI != NULL)
    {
        actual = *listaI;
        if(esVariableNueva(error, listaV, actual->identificador, tipo))
        {
            Variables nuevo_nodo = (Variables)malloc(sizeof(VARIABLES));

            strcpy(nuevo_nodo->tipoDato, tipo);
            strcpy(nuevo_nodo->identificador, actual->identificador);
            printf("\n se creo la variable %s de tipo %s  \n",nuevo_nodo->identificador,nuevo_nodo->tipoDato);

            nuevo_nodo->siguiente = *listaV;
            *listaV = nuevo_nodo;
            *listaI = actual->siguiente;
            free(actual);/* liberamos la memoria */

        }
        else{
            *listaI = actual->siguiente;
            free(actual);/* liberamos la memoria */
        }
    }
}

int esVariableNueva(Semanticos *errores, Variables *lista, char *identifi, char *tipo)
{
    Variables actual = *lista;
    while(actual != NULL)
    {
        if(strcmp(actual->identificador,identifi)==0)
        {
            dobleDeclaracion(errores, actual->tipoDato, actual->identificador , tipo, identifi );

            return 0;
        }
        actual = actual->siguiente;
    }
    return 1;
}

void imprimirVariables(Variables *lista)
{
	Variables actual = *lista;
	printf("\n\n------------------------------Lista de VARIABLES declaradas------------------------------\n\n");

    while(actual != NULL)
    {
        printf("\"%s\"   \"%s\"\n", actual->tipoDato, actual->identificador);
        actual = actual->siguiente;
    }

}
/*
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

<<<<<<< HEAD

void informeDeLectura(Lista *listaid, Funciones *listaDeFunciones, Lista *listaErrores)
{
    identificadores(listaid);
    imprimirFunciones(listaDeFunciones);
    //errores(listaErrores);
}

=======






>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

void identificadores(Lista *listaid)
{
    if(*listaid != NULL)
    {
        printf("\n\n------------------------------Lista de IDENTIFICADORES declarados------------------------------\n\n");
    }
    else{
        printf("No se declararon variables.\n");
    }
    recorrer(listaid);
}





void errores(Lista *listaErrores)
{

}

*/

//////////////////////////////////////////////////Funciones para mostrar funciones y sus parametros ///////////////////////////////////////////////////////////////////////////

<<<<<<< HEAD
void imprimirFunciones(Funciones *lista)
{
	Funciones aux1 = *lista;
	Parametros aux2 = (*lista)->parametros;

     printf("\n\n------------------------------Lista de FUNCIONES declaradas------------------------------\n\n");

	while(aux1 != NULL)
	{
		printf("Se declaro la funcion \"%s\" que devuelve un valor de tipo \"%s\"\n", aux1->nombreFuncion, aux1->tipoDato);

		if(aux2 != NULL)
		{
			printf("Recibe parametros de tipo: ");
		}
        else{
            printf("La funcion no recibe ningun parametro.\n");
        }

		while(aux2 != NULL)
		{
			printf("%s, ", aux2->tipoDato);

			aux2 = aux2 -> sig;

		}
		printf("\n\n");

		aux1 = aux1->sig;

        if(aux1 !=  NULL)
        {
           aux2 = aux1->parametros;
        }
        else
        {
            break;
        }

	}

}

void insertarFuncion(Funciones *lista, char *tipo, char *nombre)
{
    Funciones nuevo_nodo = (Funciones)malloc(sizeof(FUNCIONES));

    strcpy(nuevo_nodo->tipoDato, tipo);
    strcpy(nuevo_nodo->nombreFuncion, nombre);
    nuevo_nodo->parametros = NULL;

    nuevo_nodo -> sig = *lista;
	*lista = nuevo_nodo;

=======
void insertarFuncionSinRepetir(Funciones *lista, char *tipo, char *nombre)
{
    if(buscarFuncion(lista,nombre) != 1)
        insertarFuncion(lista,tipo,nombre);
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
}

int buscarFuncion(Funciones *lista, char *nombre)
{
    Funciones aux1 = *lista;

    while(aux1!=NULL)
    {
        if(strcmp(aux1->nombreFuncion, nombre)==0)
        {
        	return 1;
        }
        aux1 = aux1->sig;
    }
    return 0;
}


void insertarFuncion(Funciones *lista, char *tipo, char *nombre)
{
    Funciones nuevo_nodo = (Funciones)malloc(sizeof(FUNCIONES));

    strcpy(nuevo_nodo->tipoDato, tipo);
    strcpy(nuevo_nodo->nombreFuncion, nombre);
    nuevo_nodo->parametros = NULL;

    nuevo_nodo -> sig = *lista;
	*lista = nuevo_nodo;

}

void agregarParametros(Parametros *lista, char *tipo)
{
	Parametros nuevo_nodo = (Parametros)malloc(sizeof(PARAMETROS));
    strcpy(nuevo_nodo->tipoDato, tipo);
    nuevo_nodo -> sig = NULL;

    Parametros aux1 = *lista;
    Parametros aux2;

    while(aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->sig;
    }
    if( *lista == aux1)
    {
        *lista = nuevo_nodo;
    }
    else
    {
        aux2->sig = nuevo_nodo;
    }
    nuevo_nodo->sig = aux1;

}

<<<<<<< HEAD



/////////////////////////////////////Funcniones para el control de tipos de datos///////////////////////////////////////////////////
=======
void imprimirFunciones(Funciones *lista)
{
	Funciones aux1 = *lista;
	Parametros aux2 = (*lista)->parametros;

     printf("\n\n------------------------------Lista de FUNCIONES declaradas------------------------------\n\n");

	while(aux1 != NULL)
	{
		printf(" funcion \"%s\" devuelve un \"%s\"\n", aux1->nombreFuncion, aux1->tipoDato);

		if(aux2 != NULL)
		{
			printf("Recibe parametros del tipo: ");
		}
        else{
            printf("La funcion no recibe ningun parametro.\n");
        }

		while(aux2 != NULL)
		{
			printf("%s, ", aux2->tipoDato);
			aux2 = aux2 -> sig;
		}
		printf("\n\n");

		aux1 = aux1->sig;
		if(aux1 != NULL)
        {
            aux2 = aux1->parametros;
        }

	}

}

// ====================  Para los errores semanticos ====================================

void dobleDeclaracion(Semanticos *errores, char *tipoA, char *identifiA ,char *tipoB, char *identifiB )
{
    Semanticos nuevo_nodo = (Semanticos)malloc(sizeof(ERRORESSEMANTICOS));

    strcpy(nuevo_nodo->tipoDatoA, tipoA);
    strcpy(nuevo_nodo->identificadorA, identifiA);
    strcpy(nuevo_nodo->tipoDatoB, tipoB);
    strcpy(nuevo_nodo->identificadorB, identifiB);

    nuevo_nodo -> siguiente = *errores;
	*errores = nuevo_nodo;

}

void imprimirDobleDeclaracion(Semanticos *lista)
{
    Semanticos actual = *lista;
    printf("\n\n------------------------------errores Semanticos------------------------------\n\n");
    while(actual!=NULL)
    {
        printf("doble declaracion (antes) %s %s (ahora) %s %s  \n",actual->tipoDatoA,actual->identificadorA,actual->tipoDatoB,actual->identificadorB);
        actual=actual->siguiente;
    }
}
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe

void control(int tipoA, char operacion, int tipoB)
{
    switch(operacion)
    {
    case '+':
<<<<<<< HEAD
        compararTipos(tipoA, tipoB);
        break;
    case '-':
        compararTipos(tipoA, tipoB);
        break;
    case '*':
        compararTipos(tipoA, tipoB);
        break;
    case '/':
       compararTipos(tipoA, tipoB);
=======
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
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
        break;
    }

}

<<<<<<< HEAD
int compararTipos(int tipoA, int tipoB)
{
        if( tipoA == CADENA || tipoB == CADENA )
        {
            //printf("No se puede realizar una %s con un string\n", operacion);
            return NOVALIDO;
        }
        else if(tipoA == NOVALIDO || tipoB == NOVALIDO)
        {
            return NOVALIDO;
        }
        else
        {
            printf("Bien\n");
            return NUMERO;
        }
=======


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

// ================== al final de todo la funcion encargada de mostrar todo ======================


void informeDeLectura(Variables *listaV,Funciones *listaF, Semanticos *listaS)//(Lista *listaid,  Lista *listaErrores)
{
    imprimirVariables(listaV);
    imprimirFunciones(listaF);
    imprimirDobleDeclaracion(listaS);
>>>>>>> 7c595378d79f1267335122c72d284c5ddcde1dbe
}


int buscarTripoVariable(Lista *lista, char variable)
{
    Funciones aux1 = *lista;

    while(aux1!=NULL)
    {
        if(strcmp(aux1->nombreFuncion, variable)==0)
        {
            if(strcmp(aux1->tipoDato, "string") == 0){ return 2;}
        }
        aux1 = aux1->sig;
    }
    return 3;
}
