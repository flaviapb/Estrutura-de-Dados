#include "listadupenc.h"
#include <stdio.h>
#include <stdlib.h>

// funções auxiliares que apenas fatoram código comum as sub-rotinas...
listaEnc aloca();

void imprimirLista1 ( listaEnc lista ){
	printf( "\nLista 1: ( ");

	for( ;!listaVazia( lista ); lista = lista->prox )
	    printf("%d ", lista->dado );

	printf( ")\n" );
}

void imprimirLista2 ( listaEnc lista ){
	printf( "\nLista 2: ( ");

	for( ;!listaVazia( lista ); lista = lista->prox )
	    printf("%d ", lista->dado );

	printf( ")\n" );
}

void imprimirLista ( listaEnc lista ){
	printf( "\nLista com merge: ( ");

	for( ;!listaVazia( lista ); lista = lista->prox )
	    printf("%d ", lista->dado );

	printf( ")\n" );
}


listaEnc aloca(){ return (no*) malloc( sizeof( no ) ); }

int tamanhoLista( listaEnc lista ){
	int tamanho = 0;
	while( lista != NULL ) {
    	lista = lista->prox;
        tamanho++;
    }
    return tamanho;
}

void criarLista( listaEnc *lista ){ 
    *lista = NULL; 
    printf("\n------ Criação de uma lista vazia! ------ \n");
}

//* Verificar se a lista está (ou não) vazia
int listaVazia( listaEnc lista ){ return lista == NULL; }

/*  LETRA A  */
void qntdVezesElemento(listaEnc lista, int valor){

  int contador = 0;

  while(lista != NULL){

    if(valor == lista -> dado){
        contador++; 
      }
      lista = lista->prox;
    } 
  

  if(contador == 0){

    printf("Não foi possivel localizar esse elemento: %d na lista. :( \n", valor);

  }
  else{

    printf("Foi possivel localizar esse elemento: %d na lista %d vezes. :) \n", valor,contador);

  }
}


/*  LETRA B  */
int adicionandoInicio (listaEnc *lista, int valor){

  listaEnc novoElementoInicio = aloca();

  if(listaVazia( *lista )){

      novoElementoInicio ->dado = valor;
      *lista = novoElementoInicio;
  }
  
  else{ 

		novoElementoInicio ->dado = valor;
    novoElementoInicio ->prox = *lista;
    (*lista)->ant = novoElementoInicio;
    *lista = novoElementoInicio;
  }

  return 0;

  free(novoElementoInicio);
} 

/*  LETRA C  */
int adicionandoFim (listaEnc *lista, int valor){

  listaEnc novoElementoFinal = aloca(), elementoNovo = NULL;
  int contador = 0;

  if(listaVazia( *lista )){

    adicionandoInicio(lista, valor);
    return 1;
  }
  
  else{
    elementoNovo = *lista;

    while((contador <= tamanhoLista( *lista )) && (elementoNovo->prox != NULL)){
      elementoNovo = elementoNovo -> prox;
      contador++;
    }

    novoElementoFinal->dado = valor;
    novoElementoFinal->prox = NULL;

    novoElementoFinal -> ant = elementoNovo;
    elementoNovo->prox = novoElementoFinal;

    return 1;
  } /*fim do else*/
  
  free(novoElementoFinal);
  free(elementoNovo);
}

/*  LETRA D  */
void removendoInicio(listaEnc *lista){
  listaEnc elementoRemovidoInicio = NULL;

  int elemento = 0;

  if(listaVazia( *lista )){
    printf("A lista já está vazia, adicione algum elemento. :)");
  }
  
  else{
    elementoRemovidoInicio = *lista;

    elemento = elementoRemovidoInicio->dado; 

    *lista = elementoRemovidoInicio->prox;
    
    if(elementoRemovidoInicio->prox != NULL){ 

      elementoRemovidoInicio->prox->ant = NULL;
      };
  }

  free(elementoRemovidoInicio);
}

/*  LETRA E  */
void removendoFim(listaEnc *lista){

  listaEnc elementoRemovidoFinal = NULL;
  int elemento, contador = 0;
  

  if(listaVazia( *lista )){
    printf("A lista já está vazia, adicione algum elemento. :)");
  }
  
  else{

    elementoRemovidoFinal = *lista;

    while((contador <= tamanhoLista( *lista )) && (elementoRemovidoFinal->prox != NULL)) {

      elementoRemovidoFinal = elementoRemovidoFinal -> prox;
      contador++;
    }

    elemento = elementoRemovidoFinal -> dado;

    if (tamanhoLista( *lista ) == 1){
      *lista = NULL;
    }

    else{
      if(elementoRemovidoFinal -> prox == NULL){ 
        elementoRemovidoFinal -> ant -> prox = NULL;
      };
    }
  }

  free(elementoRemovidoFinal);
}



// Questão do merg
listaEnc* merge(listaEnc* primeiraLista, listaEnc* segundaLista){

  listaEnc *Terceiralista = malloc(sizeof (listaEnc) *tamanhoLista( *primeiraLista ));
  listaEnc  auxiliarPrimeiraLista = NULL, auxiliarSegundaLista = NULL;


  auxiliarPrimeiraLista = *primeiraLista;
  auxiliarSegundaLista = *segundaLista;

  int tamanhoDiferente = 0, contador = 1;

  tamanhoDiferente = tamanhoLista(*primeiraLista) + tamanhoLista(*segundaLista);

  while(tamanhoDiferente >= contador ){


    if(auxiliarPrimeiraLista != NULL){
      adicionandoFim (Terceiralista, auxiliarPrimeiraLista -> dado);
      auxiliarPrimeiraLista = auxiliarPrimeiraLista -> prox;
    }

    if(auxiliarSegundaLista != NULL){
      adicionandoFim (Terceiralista, auxiliarSegundaLista -> dado);
      auxiliarSegundaLista = auxiliarSegundaLista -> prox;
    }

    contador ++;
  }

  return Terceiralista;

  free(Terceiralista);
  free(auxiliarPrimeiraLista);
  free(auxiliarSegundaLista);  
}