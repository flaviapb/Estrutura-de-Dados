#include "pilhas.h"
#include <stdio.h>
#include <stdlib.h>

/* Criar uma pilha vazia */
void criarPilha( TPilhaEnc *pilha )
{
	*pilha = NULL;
}

/* Verificar se a pilha está vazia ou não */
int pilhaVazia( TPilhaEnc pilha )
{
	return pilha == NULL;
}

/* Tamanho da pilha */
int tamanhoPilha( TPilhaEnc pilha )
{
	int tamanho = 0;
	while( pilha != NULL ) {
		pilha = pilha->prox;
		tamanho++;
	}
	return tamanho;
}

/* Empilhar um elemento */
int empilhar( TPilhaEnc *pilha, int dado )
{
	TPilhaEnc novo;

	// aloca o no e testa pra ver se o SO alocou mesmo
	if( (novo = (no*) malloc(sizeof(no))) == NULL ) return 0;

	novo->dado = dado;
	novo->prox = *pilha;
	*pilha = novo;
	return 1;
}

/* Desempilhar um elemento */
int desempilhar( TPilhaEnc *pilha, int *dado )
{
	// se pilha está vazia
   	if ( pilhaVazia( *pilha ) ) return 0;

	TPilhaEnc aux;

	aux = *pilha;
	*dado = aux->dado;
	*pilha = (*pilha)->prox;
	
	// libera memória do nó desempilhado
	free( aux );

    return 1;
}


/* Consultar o topo pilha */
int elementoTopo( TPilhaEnc pilha, int *dado )
{
	if( pilhaVazia( pilha ) ) return 0;

	*dado = pilha->dado; // já que topo é igual ao primeiro no
	return 1;
}

/* Exibir todos os elementos da pilha */
int imprimir ( TPilhaEnc pilha )
{
	// se pilha está vazia
   	if ( pilhaVazia( pilha ) ) return 0;

    printf(" = [ ");

	// varrendo todos os elementos
	while( !pilhaVazia(pilha) ){
		printf("%d ", pilha->dado);
		pilha = pilha->prox;
	}

    printf("]");
     return 1;
}

//clonando a pilha origem para uma destino
int clonar (TPilhaEnc *origem, TPilhaEnc *destino){

  //Criando variável para criar uma pilha temporária
  TPilhaEnc temporaria;
  
  //Criando pilha temporária
  criarPilha(&temporaria);

  //Criando os auxiliares para o funcionamento da função
  TPilhaEnc a = *origem, b = *destino;
  
  int elemento;

  //verificando se a pilha origem está vazia

  if(pilhaVazia(a)){
    printf("---ERRO --> PILHA ORIGEM VAZIA, IMPOSSIVEL REALIZAR A CLONAGEM!");
    return 0;
  }

  else{

    //Adicionando os elementos da pilha origem na pilha temporária

    while( !pilhaVazia(a) ){
      elemento = a -> dado;
		  empilhar(&temporaria, elemento);
		  a = a -> prox;
	  }

    //verificando se a pilha destino já tem Dados

    if(!pilhaVazia(b)){
      printf("---ERRO --> PILHA DESTINO JÁ POSSUI ELEMENTOS, IMPOSSIVEL REALIZAR A CLONAGEM!");
      return 0;
    }

    else{

      //Adicionando elementos da pilha temporaria na pilha destino

      while( !pilhaVazia(temporaria) ){
      elemento = temporaria -> dado;
		  empilhar(&b,elemento);
		  temporaria = temporaria -> prox;
	    }
    }
  
  *destino = b;
  printf("\n\nSUCESS0 --> CLONAGEM FEITA, CONFIRA: \n");
  }

  return 1;
  free(a);
  free(b);
  free(temporaria);
}

//Função feita só para pular linha
void pularlinha(){
  printf("\n");
}
