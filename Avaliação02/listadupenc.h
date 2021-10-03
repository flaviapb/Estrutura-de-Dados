typedef struct nolista {
	int dado;  			   // campo que guarda a informação
    struct nolista *prox;  // guarda o endereço para prox nó
    struct nolista *ant;   // guarda o endereço para nó anterior
}no;

typedef no* listaEnc;

/*------------------------LETRA A DA AVALIAÇÃO----------------------*/
/* Quantas vezes que um número aparece na lista*/
void qntdVezesElemento(listaEnc lista, int elemento);

/*------------------------LETRA B DA AVALIAÇÃO----------------------*/
/*  Adicionando um elemento SEMPRE no inicio da lista */
int adicionandoInicio (listaEnc *lista, int elemento);

/*------------------------LETRA C DA AVALIAÇÃO----------------------*/
/*  Adicionando um elemento SEMPRE no final da lista */
int adicionandoFim (listaEnc *lista, int elemento);

/*------------------------LETRA D DA AVALIAÇÃO----------------------*/
/* Removendo SEMPRE o primeiro elemento da lista */
void removendoInicio(listaEnc *lista);

/*------------------------LETRA E DA AVALIAÇÃO----------------------*/
/* Removendo SEMPRE o ultimo elemento da lista */
void removendoFim(listaEnc *lista);

/* Realiza a junção entre as duas listas */
listaEnc* merge(listaEnc *lista01, listaEnc *lista02);

/* Procedimento para criar uma lista vazia */
void criarLista( listaEnc *lista );

/* Função para verificar se a lista está vazia ou nó */
int listaVazia( listaEnc lista );

/* Função para verificar a quantidade de elementos na lista */
int tamanhoLista( listaEnc lista );

/* Procedimento para exibir todos os elementos da lista */
void imprimirLista2 ( listaEnc lista );
void imprimirLista1 ( listaEnc lista );
void imprimirLista ( listaEnc lista );

/* Função para verificar a quantidade de elementos na lista */
int tamanhoLista( listaEnc lista );