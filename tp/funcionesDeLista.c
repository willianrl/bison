#include "funcionesDeLista.h"
#define CARACTER 1
#define CADENA 2
#define NUMERO 3


//==================  Funciones para las declaraciones de variables ======================================

void insertarIdentificador(Identificadores *lista, char *identifica)
{
    Identificadores nuevo_nodo = (Identificadores)malloc(sizeof(IDENTIFICADORES));

    strcpy(nuevo_nodo->identificador, identifica);

    nuevo_nodo->siguiente = *lista;
	*lista = nuevo_nodo;
}

void insertarVariable(DobleDeclaraciones *error, Variables *listaV, Identificadores *listaI, char *tipo, int linea)
{
    Identificadores actual;

    while(*listaI != NULL)
    {
        actual = *listaI;

        int numeroDeTipo = transformarTipo(tipo);

        if( esVariableNueva(listaV, actual->identificador) )/* ENTRA SI ES IDENTIFICADOR NUEVO  */
        {
            Variables nuevo_nodo = (Variables)malloc(sizeof(VARIABLES));

            strcpy(nuevo_nodo->tipoDato, tipo);
            nuevo_nodo->numeroTipoDato = numeroDeTipo;
            strcpy(nuevo_nodo->identificador, actual->identificador);
            //printf("\n se creo la variable %s de tipo %s  \n",nuevo_nodo->identificador,nuevo_nodo->tipoDato);

            nuevo_nodo->siguiente = *listaV;
            *listaV = nuevo_nodo;
        }
        else{
            insertarDobleDeclaracion(error, actual->identificador ,numeroDeTipo, tipoDeDatoVariable(listaV, actual->identificador), linea );
        }
        *listaI = actual->siguiente;
        free(actual);/* liberamos la memoria */
        //printf("\n acabo de liberar memoria   \n");
    }
}

int tipoDeDatoVariable(Variables *lista, char *identifi)//(Semanticos *errores, Variables *lista, char *identifi, char *tipo)
{
    Variables actual = *lista;
    while(actual != NULL)
    {
        if(strcmp(actual->identificador,identifi)==0)
        {
            //printf("\n\n variable repetida \n");
            return actual->numeroTipoDato;
        }
        actual = actual->siguiente;
    }
}

int esVariableNueva(Variables *lista, char *identifi)
{
    Variables actual = *lista;
    while(actual != NULL)
    {
        if(strcmp(actual->identificador,identifi)==0)
        {
            return 0;
        }
        actual = actual->siguiente;
    }
    return 1;
}

void imprimirVariables(Variables *lista)
{
	Variables actual = *lista;
	if(actual!=NULL)
    {
        printf("\n\n------------------------------Lista de VARIABLES declaradas------------------------------\n\n");

        while(actual != NULL)
        {
            printf("\"%s\"   \"%s\".\n", actual->tipoDato, actual->identificador);
            actual = actual->siguiente;
        }
    }
}

int transformarTipo(char *tipo)
{
    if( strcmp("char",tipo)==0 ){
        return 1;}
    if( strcmp("int",tipo)==0 ){
        return 3;}
}

void imprimirSegunTipo(int numero)
{
    switch(numero)
    {
        case 1:
            printf(" \"char\" ");
            break;
        case 2:
            printf(" \"char *\" ");
            break;
        case 3:
            printf(" \"int\" ");
            break;

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








void identificadores(Lista *listaid)
{

    printf("\n\n------------------------------Lista de IDENTIFICADORES declarados------------------------------\n\n");
    recorrer(listaid);
}





void errores(Lista *listaErrores)
{

}

*/

//////////////////////////////////////////////////Funciones para mostrar funciones y sus parametros ///////////////////////////////////////////////////////////////////////////

void insertarFuncionSinRepetir(Funciones *lista, char *tipo, char *nombre)
{
    if(buscarFuncion(lista,nombre) != 1)
        insertarFuncion(lista,tipo,nombre);
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

void imprimirFunciones(Funciones *lista)
{

	Funciones aux1 = *lista;
	if(aux1 != NULL)
    {
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

}

// ====================  Para los errores semanticos ====================================

void insertarDobleDeclaracion(DobleDeclaraciones *errores, char *identifi ,int tipoA, int tipoB, int linea )
{
    DobleDeclaraciones nuevo_nodo = (DobleDeclaraciones)malloc(sizeof(DOBLEDECLARACIONES));

    strcpy(nuevo_nodo->identificadorA, identifi);
    nuevo_nodo->numTipoDatoA = tipoA;
    strcpy(nuevo_nodo->identificadorB, identifi);
    nuevo_nodo->numTipoDatoB = tipoB;
    nuevo_nodo->linea = linea;

    nuevo_nodo -> siguiente = *errores;
	*errores = nuevo_nodo;

}

void imprimirDobleDeclaracion(DobleDeclaraciones *lista)
{
    DobleDeclaraciones actual = *lista;
    if(actual!=NULL)
    {
        printf("\nDoble declaracion \n");
        while(actual!=NULL)
        {
            printf("(antes) \"%s\" ",actual->identificadorA);
            imprimirSegunTipo(actual->numTipoDatoA);
            printf("(ahora) \"%s\" ",actual->identificadorB);
            imprimirSegunTipo(actual->numTipoDatoB);
            printf(", linea %i.\n",actual->linea);
            actual=actual->siguiente;
        }
    }
}

void insertarLValue(LValue *errores, char *identifi, int opcion, int linea)
{
    LValue nuevo_nodo = (LValue)malloc(sizeof(LVALUE));

    strcpy(nuevo_nodo->identificador, identifi);
    nuevo_nodo->tipo = opcion;
    nuevo_nodo->linea = linea;

    nuevo_nodo->siguiente = *errores;
	*errores = nuevo_nodo;
}

void imprimirLValue(LValue *lista)
{
    LValue actual = *lista;
    if(actual!=NULL)
    {
        printf("\nLValue \n");
        while(actual!=NULL)
        {
            if(actual->tipo == 1){
                printf("variable \"%s\" no esta declarada, linea %i.\n",actual->identificador, actual->linea);
            }
            else{
                printf("%s no es Lvalue, linea %i.\n",actual->identificador, actual->linea);
            }
            actual=actual->siguiente;
        }
    }
}

void control(ControlDeDatos *listaCD ,int tipoA, char operacion, int tipoB, int linea)
{
    switch(operacion)
    {
    case '+':
        comparar(listaCD,tipoA, tipoB, "sumar", linea);
        break;
    case '-':
        comparar(listaCD,tipoA, tipoB, "restar", linea);
        break;
    case '*':
        comparar(listaCD,tipoA, tipoB, "multiplicar", linea);
        break;
    case '/':
       comparar(listaCD,tipoA, tipoB, "dividir", linea);
        break;
    }

}



void comparar(ControlDeDatos *listaCD, int tipoA, int tipoB, char *operacion, int linea)
{
    if(tipoA == CADENA  && tipoB == CADENA)
    {
        //printf("No se puede %s entre string\n", operacion);
        insertarControlDeDatos(listaCD,tipoA,operacion,tipoB,linea);
    }
    else if(tipoA == CADENA)
    {
        //printf("No se puede realizar una %s con un string\n", operacion);
        insertarControlDeDatos(listaCD,tipoA,operacion,tipoB,linea);
    }
    else if(tipoB == CADENA)
    {
        //printf("No se puede realizar una %s con un string\n", operacion);
        insertarControlDeDatos(listaCD,tipoA,operacion,tipoB,linea);
    }
    else
    {
        //printf("Bien\n");
    }
}

void insertarControlDeDatos(ControlDeDatos *listaCD, int tipoA, char *opera, int tipoB, int linea)
{
    ControlDeDatos nuevo_nodo = (ControlDeDatos)malloc(sizeof(CONTROLDEDATOS));

    nuevo_nodo->numTipoDatoA = tipoA;
    strcpy(nuevo_nodo->operacion, opera);
    nuevo_nodo->numTipoDatoB = tipoB;
    nuevo_nodo->linea = linea;

    nuevo_nodo->siguiente = *listaCD;
	*listaCD = nuevo_nodo;
}

void imprimirControlDeDatos(ControlDeDatos *listaCD)
{
    ControlDeDatos actual = *listaCD;
    if(actual!=NULL)
    {
        printf("\nError en la operacion binaria\n");
        while(actual!=NULL)
        {
            printf("No se puede %s un ",actual->operacion);
            imprimirSegunTipo(actual->numTipoDatoA);
            printf("con ");
            imprimirSegunTipo(actual->numTipoDatoB);
            printf(", linea %i.\n",actual->linea);

            actual = actual->siguiente;
        }
    }
}


void imprimirErroresSemanticos(ControlDeDatos *listaCD, LValue *listaLV, DobleDeclaraciones *listaDD)
{
    printf("\n\n------------------------------Errores Semanticos------------------------------\n");
    imprimirControlDeDatos(listaCD);
    imprimirLValue(listaLV);
    imprimirDobleDeclaracion(listaDD);
}

// ================== para errores sintacticos ======================

// agregarCola(&inicio, &fin, mensaje, nroLinea);
void agregarCola(ErroresSintacticos *inicio, ErroresSintacticos *fin, char *mensaje, int nroLinea)
{
	ErroresSintacticos nuevo_nodo = (ErroresSintacticos)malloc(sizeof(ERRORESSINTACTICOS));
	strcpy(nuevo_nodo->mensajeError, mensaje);
	nuevo_nodo->linea = nroLinea;

	nuevo_nodo -> siguiente	= NULL;

	if(*inicio == NULL)
	{
		*inicio = nuevo_nodo;
		*fin = nuevo_nodo;
	}
	else
	{
		(*fin)->siguiente = nuevo_nodo;
		*fin = nuevo_nodo;
	}

}

void imprimirErroresSintacticos(ErroresSintacticos *inicio)
{
	ErroresSintacticos error = *inicio;

	printf("\n\n------------------------------Errores Sintacticos------------------------------\n\n");

	if( error == NULL)
	{
		printf("No se encontraron errores.\n");
	}

	while( error != NULL )
	{
		printf("%s, linea %i\n", error->mensajeError, error->linea);
		error = error->siguiente;
	}

}


// ================== al final de todo la funcion encargada de mostrar todo ======================


void informeDeLectura(Variables *listaV,Funciones *listaF, ControlDeDatos *listaCD, LValue *listaLV, DobleDeclaraciones *listaDD, ErroresSintacticos *listaErrores)//(Lista *listaid,  Lista *listaErrores)
{
    imprimirVariables(listaV);
    imprimirFunciones(listaF);
    imprimirErroresSintacticos(listaErrores);
    imprimirErroresSemanticos(listaCD,listaLV,listaDD);
}

