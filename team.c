/*
 * team.c
 *
 *  Created on: 18 abr. 2020
 *      Author: utnso
 */


#include <utils.h>
#include <stdarg.h>

typedef enum
{
	BROKER = 1,
	TEAM = 2,
	GAMECARD =3
}n_proceso;

typedef enum
{
	NEW_POKEMON = 1,
	APPEARED_POKEMON = 2,
	CATCH_POKEMON = 3,
	CAUGHT_POKEMON = 4,
	GET_POKEMON = 5,
	LOKALIZED_POKEMON = 6
}tipo_mensaje;

int tipoDeProceso(char*);
int codDeMensaje(char*);
t_paquete* crearPaquete(int, int, ...);
void mostrarPaquete(t_paquete*);

int main(int argc, char* argv[]){
	t_paquete* my_paquete;


	//my_paquete = crearPaquete(tipoDeProceso(argv[1]), codDeMensaje(argv[2]), argv[3], argv[4], argv[5], argv[6]);
	my_paquete = crearPaquete(tipoDeProceso(argv[1]), codDeMensaje(argv[2]), argv[3], argv[4], argv[5]);
	mostrarPaquete(my_paquete);
	return 0;
}

int tipoDeProceso(char* tipo)
{
	if(strcmp("BROKER", tipo)==0)
		return 1;
	if(strcmp("TEAM", tipo)==0)
		return 2;
	if(strcmp("GAMECARD", tipo)==0)
		return 3;

	return -4;
}

int codDeMensaje(char* tipo)
{
	if(strcmp("NEW_POKEMON", tipo)==0)
			return 1;
	if(strcmp("APPEARED_POKEMON", tipo)==0)
			return 2;
	if(strcmp("CATCH_POKEMON", tipo)==0)
			return 3;
	if(strcmp("CAUGHT_POKEMON", tipo)==0)
			return 4;
	if(strcmp("GET_POKEMON", tipo)==0)
			return 5;
	if(strcmp("LOKALIZED_POKEMON", tipo)==0)
			return 6;

	return -1;
}

t_paquete* crearPaquete(int proceso, int codMensaje, ...)
{
	char* pokemon = malloc(50); // mas de 50 no puede ser nombre de un pokemon
	int id_mensaje = 0, ok_fail = 0, posX = 0, posY = 0,  cantidad = 0, lengthPokemon = 0;

	va_list args;
	va_start(args, codMensaje);

	if( codMensaje==GET_POKEMON ) {															//
		pokemon = va_arg(args,char*);														//
	}																						//
	if( codMensaje==CAUGHT_POKEMON ) { 														//
		id_mensaje = atoi(va_arg(args,char*));												//
		ok_fail = atoi(va_arg(args,char*));													//
	} 																						//
	if( codMensaje==CATCH_POKEMON ) {														//
		pokemon = va_arg(args,char*);														//
		posX = atoi(va_arg(args,char*));													//
		posY = atoi(va_arg(args,char*));													// dependiendo la cantidad de argumentos que le enviemos
	} 																						//
	if( codMensaje==APPEARED_POKEMON ) {													// esto va a crear las variables necesarias
		pokemon = va_arg(args,char*);														//
		posX = atoi(va_arg(args,char*));													//
		posY = atoi(va_arg(args,char*));													//
		if( proceso==BROKER )					// necesario para el broker					//
		id_mensaje = atoi(va_arg(args,char*)); 	// el team no lo necesita 					//
	} 																						//
	if( codMensaje==NEW_POKEMON ) {															//
		pokemon = va_arg(args,char*);														//
		posX = atoi(va_arg(args,char*));													//
		posY = atoi(va_arg(args,char*));													//
		cantidad = atoi(va_arg(args,char*));												//
	}																						//

	va_end(args);
/*
	printf("pokemon: %s \n",pokemon);
	printf("posX: %d \n",posX);
	printf("posY: %d \n",posY);
	printf("ok_fail: %d \n",ok_fail);
	printf("cantidad: %d \n",cantidad);
	printf("id_mensaje: %d \n",id_mensaje);
	printf("lengthPokemon %d \n",lengthPokemon);
*/

	t_paquete* paquete = malloc(sizeof(t_paquete));											//
	paquete -> codigo_operacion = codMensaje;												//
	paquete -> buffer = malloc(sizeof(t_buffer));											//
	if( codMensaje == NEW_POKEMON ) {														//
		lengthPokemon = strlen(pokemon)+1;													//
		paquete->buffer->size = lengthPokemon + 4 * sizeof(int);							//
	} 																						//
	if( codMensaje==APPEARED_POKEMON ) {													//
		lengthPokemon = strlen(pokemon)+1;													//
		if( proceso==TEAM )																	//
			paquete->buffer->size = lengthPokemon + 3 * sizeof(int);						//
		if( proceso==BROKER )																//
			paquete->buffer->size = lengthPokemon + 4 * sizeof(int);						// se designa el tamaño de buffer
	} 																						//
	if( codMensaje==CATCH_POKEMON ) {														//
		lengthPokemon = strlen(pokemon)+1;													//
		paquete->buffer->size = strlen(pokemon) + 3 * sizeof(int);							//
	} 																						//
	if( codMensaje==CAUGHT_POKEMON ) {														//
		paquete->buffer->size = 2 * sizeof(int);											//
	} 																						//
	if( codMensaje==GET_POKEMON) {															//
		lengthPokemon = strlen(pokemon)+1;													//
		paquete->buffer->size = lengthPokemon + sizeof(int);								//
	}																						//

	void* stream = malloc(paquete->buffer->size);
	int offset = 0;
	// empezamos cone este por que es DIFERENTE a los demas
	if( codMensaje==CAUGHT_POKEMON ) { 								//
		memcpy( stream + offset, &id_mensaje, sizeof(int) );		//
		offset += sizeof(int);										// caught pokemon
		memcpy( stream + offset, &ok_fail , sizeof(int) );			//
		offset += sizeof(int);										//
	} else {
		memcpy( stream + offset, &lengthPokemon, sizeof(int) );						//					//						//				//
		offset += sizeof(int);														// get_pokemon		//						//				//
		memcpy( stream + offset, pokemon, lengthPokemon );							//					//						//				//
		offset += lengthPokemon;													//					// catch_pokemon		//				//
		// seria mejor poner ( codMensaje != GET_POKEMON ) pero se entiende mejor el de abajo			//		o				//				//
		if( codMensaje==NEW_POKEMON || codMensaje==APPEARED_POKEMON || codMensaje==CATCH_POKEMON ) { 	// appeared_pokemon		//				// appaered_ṕokemon
			memcpy( stream + offset, &posX, sizeof(int) );												// pero para el team	// new_pokemon	//
			offset += sizeof(int);																		// 						//				//
			memcpy( stream + offset, &posY, sizeof(int) );												//						//				//
			offset += sizeof(int);																		//						//				//
			if( codMensaje==NEW_POKEMON ) {																						//
				memcpy( stream + offset, &cantidad, sizeof(int) );																//
				offset += sizeof(int);																							//
			}																													//
			if( codMensaje==APPEARED_POKEMON && proceso==BROKER ) {																				//
				memcpy( stream + offset, &id_mensaje, sizeof(int) );    																		// pero para el broker
				offset += sizeof(int);																											//
			}																																	//
		}

	}

	paquete->buffer->stream = stream;

	return paquete;
}


void mostrarPaquete(t_paquete* my_paquete)
{
	int largoNombre = 0;
	memcpy(&largoNombre, my_paquete->buffer->stream, sizeof(int));
	char* nombre  = malloc(largoNombre);
	memcpy(nombre, my_paquete->buffer->stream + 4, largoNombre);
	int posX = 0;
	memcpy(&posX, my_paquete->buffer->stream + 4 + largoNombre, sizeof(int));
	int posY = 0;
	memcpy(&posY, my_paquete->buffer->stream + 4 + largoNombre + 4, sizeof(int));
	int cant = 0;
	memcpy(&cant, my_paquete->buffer->stream + 4 + largoNombre + 4 + 4, sizeof(int));
	int cant2 = 0;
	memcpy(&cant2, my_paquete->buffer->stream + 4 + largoNombre + 4 + 4 + 4, sizeof(int));

	printf("codigo de mensaje %d \n", my_paquete->codigo_operacion);
	//printf("size: %d \n", my_paquete->buffer->size);
	printf("largo del nombre: %d \n", largoNombre);
	printf("nombre: %s \n", nombre);
	printf("posX: %d \n", posX);
	printf("posY: %d \n", posY);
	printf("cant: %d \n", cant);
	printf("cant2: %d \n", cant2); /*
	int posX = 0;
	memcpy(&posX, my_paquete->buffer->stream, sizeof(int));
	int posY = 0;
	memcpy(&posY, my_paquete->buffer->stream + 4, sizeof(int));
	int cant = 7;
	memcpy(&cant, my_paquete->buffer->stream + 4 + 4, sizeof(int));
	printf("codigo de operacion %d \n", my_paquete->codigo_operacion);
	printf("posX: %d \n", posX);
	printf("posY: %d \n", posY);
	printf("cant: %d \n", cant);*/
}
