
typedef struct Nodo
{
	char mensajeError[20];
	char tipoError[20];
	int linea;
	struct Nodo *siguiente;
} tipoNodo2;

typedef tipoNodo2 *Cola;

void agregarCola(Cola *inicio, Cola *fin, char *mensaje, char *tipoMensaje, int nroLinea);

void recorrerCola(Cola *inicio);
