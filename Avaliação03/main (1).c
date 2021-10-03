#include "pilhas.h"
#include <stdio.h>

int main (void) {
	
	// criando a variável pilha
	TPilhaEnc pilha1;
  TPilhaEnc pilha2;

  // criar a pilha em sí
  criarPilha( &pilha1 );
  criarPilha( &pilha2 );

  // pedindo tamanho da pilha ao usuário

  int qntdPilhaI;
  pularlinha();

  printf("  ------------ ADICIONANDO ELEMENTOS NA PILHA: ------------");

  pularlinha();

  printf("\nDigite a quantidade de elementos da 1° pilha: ");
  scanf("%d",&qntdPilhaI);

  pularlinha();

  // pedindo os dados ao usuário
  int elemento;

  for(int i = 0; i < qntdPilhaI;i++){

    printf("Digite o %d° elemento da pilha: ",i+1);
    scanf("%d",&elemento);

    //Adicionando os elementos na pilha
    empilhar( &pilha1, elemento );
  }

  //Imprimindo a primeira pilha
  pularlinha();

  printf("  --------------- IMPRESSÃO DAS PILHAS: ---------------");

  pularlinha();

  printf("\nIMPRIMINDO A 1° PILHA");
  imprimir( pilha1 );


  // clonando a 1° pilha
  int dado;
  clonar (&pilha1, &pilha2);

  //Imprimindo a primeira pilha
  printf("\nIMPRIMINDO A 2° PILHA");
  imprimir( pilha2 );

  // consultando o topo da 1° pilha
  pularlinha();
  pularlinha();

  printf("  --------------- IMPRESSÃO DO ELEMENTO DO TOPO: ---------------");

  pularlinha();

	int topo; 
	elementoTopo( pilha1, &topo );
  printf( "\nELEMENTO QUE ESTÁ NO TOPO DAS PILHAS: %d\n", topo  );

  // Desimpilhando a pilha que o usuário escolheu

  pularlinha();
  pularlinha();

  printf("  --------------- DESEMPILHANDO ALGUMA DAS PILHAS: ------------");

  pularlinha();

  //Vendo qual pilha vai ser desempilhada
  int opcao;
  printf("Digite a pilha que você deseja desempilhar: ");
  scanf("%d",&opcao);

  //Vendo se a pilha existe
  while(opcao != 1 & opcao != 2){
    printf("Digite a pilha que você deseja desempilhar: ");
    scanf("%d",&opcao);
  }

  pularlinha();

  //Verificando qual pilha escolhida
  if(opcao == 1){

    int qntd;

    printf("Digite a quantidade de dados que você deseja desempilhar: ");
    scanf("%d",&qntd);

    pularlinha();

   
    while(tamanhoPilha(pilha1) < qntd){
      printf("ERRO --> PILHA MENOR QUE A QUANTIDADE!");
      pularlinha();
      printf("Digite a quantidade de dados que você deseja desempilhar: ");
      scanf("%d",&qntd);
    }

    for(int i = 0; i < qntd; i++){
        desempilhar(&pilha1,&elemento);
    }

    if(pilhaVazia(pilha1)){
      printf("PILHA1 VAZIA!!!\n");
    }

    else{
      pularlinha();
      printf("IMPRIMINDO A 1° PILHA");
      imprimir( pilha1 );
      pularlinha();
    }
  }

  if(opcao == 2){

    int qntd;

    printf("Digite a quantidade de dados que você deseja desempilhar: ");
    scanf("%d",&qntd);

    pularlinha();

   
    while(tamanhoPilha(pilha2) < qntd){
      printf("ERRO --> PILHA MENOR QUE A QUANTIDADE!");
      pularlinha();
      printf("Digite a quantidade de dados que você deseja desempilhar: ");
      scanf("%d",&qntd);
    }


    for(int i = 0; i < qntd; i++){
        desempilhar(&pilha2,&elemento);
    }

    if(pilhaVazia(pilha2)){
      printf("PILHA2 VAZIA!!!\n");
    }

    else{
      pularlinha();
      printf("IMPRIMINDO A 2° PILHA");
      imprimir( pilha2 );
      pularlinha();
    }
  }

return 0;
}