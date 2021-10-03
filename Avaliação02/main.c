#include <stdio.h>
#include "listadupenc.h"

int main(void) {
  
  listaEnc lista1, lista2;
  listaEnc *lista3;

  /*Realização de todas as operações na 1° lista */
  criarLista(&lista1);
  
  printf("\n --- Pedidindo ao usuário e adicionando elementos na 1° LISTA --- \n");

  int qntdnumeros = 0,numeros;
  printf("\nDigite a quantidade de números da 1° lista para serem adicionados no INICIO e depois no FINAl: ");
  scanf("%d",&qntdnumeros);

  for(int i = 0; i < qntdnumeros; i++){
    printf("\nDigite o %d número da 1° lista, para serem adicionados SEMPRE no INICIO: ",i+1);
    scanf("%d",&numeros);
    adicionandoInicio (&lista1, numeros);
  }
  
  imprimirLista1 (lista1);

  for(int i = 0; i < qntdnumeros; i++){
    printf("\nDigite o %d número da 1° lista, para serem adicionados SEMPRE no FINAL: ",i+1);
    scanf("%d",&numeros);
    adicionandoFim (&lista1, numeros);
  }

  printf("\n--- LISTA 1 COM TODOS OS ELEMENTOS ADICIONADOS ---\n");
  imprimirLista1 (lista1);

  printf("\n--- LISTA 1 COM O 1° ELEMENTO REMOVIDO ---\n");
  removendoInicio(&lista1);
  imprimirLista1 (lista1);

  printf("\n--- LISTA 1 COM O ÚLTIMO ELEMENTO REMOVIDO ---\n");
  removendoFim(&lista1);
  imprimirLista1 (lista1);
  
  printf("\n\n\n");

   /*Realização de todas as operações na 2° lista */
  criarLista(&lista2);
  
  printf("\n --- Pedidindo ao usuário e adicionando elementos na 2° LISTA --- \n");

  int qntdnumeros2 = 0,numeros2;
  printf("\nDigite a quantidade de números da 2° lista para serem adicionados no INICIO e depois no FINAl: ");
  scanf("%d",&qntdnumeros2);

  for(int i = 0; i < qntdnumeros2; i++){
    printf("\nDigite o %d número da 2° lista, para serem adicionados SEMPRE no INICIO: ",i+1);
    scanf("%d",&numeros2);
    adicionandoInicio (&lista2, numeros2);
  }
  
  imprimirLista2 (lista2);

  for(int i = 0; i < qntdnumeros2; i++){
    printf("\nDigite o %d número da 2° lista, para serem adicionados SEMPRE no FINAL: ",i+1);
    scanf("%d",&numeros2);
    adicionandoFim (&lista2, numeros2);
  }

  printf("\n--- LISTA 2 COM TODOS OS ELEMENTOS ADICIONADOS ---\n");
  imprimirLista2 (lista2);

  printf("\n--- LISTA 2 COM O 1° ELEMENTO REMOVIDO ---\n");
  removendoInicio(&lista2);
  imprimirLista2 (lista2);

  printf("\n--- LISTA 2 COM O ÚLTIMO ELEMENTO REMOVIDO ---\n");
  removendoFim(&lista2);
  imprimirLista2 (lista2);

  printf("\n\n");

  /*Juntando as 2 listas com o merge*/
  
  printf("--- Junção das duas listas ---");
  lista3 = (merge(&lista1, &lista2));
  imprimirLista(*merge(&lista1, &lista2));
  printf("\n\n");

  /*Encontrar algum elmento na lista3 */
  printf("Localizando elemento na junção da lista");
  int elementoEncontrar = 0;

  printf("\n Qual elemento você deseja encontrar na lista: ");
  scanf("%d",&elementoEncontrar);
  printf("\n\n");
  qntdVezesElemento(*lista3,elementoEncontrar);
  printf("\n\n --- FIM ---");

  return 0;

}