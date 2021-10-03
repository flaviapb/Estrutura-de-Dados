#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    float x,y;
} ponto;

typedef struct{
    char nome[10];
    ponto centro; /*Para passar x e y de uma vez.*/
    float raio;
} Circulo;


Circulo* criarCirculo(char nome[10], float centrox, float centroy, float raio){

    Circulo *circulo = malloc(sizeof(Circulo));
    
    strcpy(circulo->nome, nome), circulo->centro.x = centrox, circulo->centro.y = centroy, circulo->raio = raio;

    return circulo;
}

int contem(Circulo* circulo1, Circulo* circulo2){

   double soma =  pow(circulo1-> centro.x - circulo2 -> centro.x,2) + pow(circulo1-> centro.y - circulo2 -> centro.y,2);

   double d = sqrt(soma);

   if (d + circulo2 -> raio <= circulo1 -> raio){
       return 1;
   } 

   else{
       return 0;
   }
}

int main(void){

    Circulo *c1 = criarCirculo("Circulo01", 3.0, 4.0, 2.0);
    Circulo *c2 = criarCirculo("Circulo02", 3.0, 3.0, 1.0);
    Circulo *c3 = criarCirculo("Circulo03", 1.0, 5.0, 1.0);
    printf("%d\n", contem(c1,c2));
    printf("%d\n", contem(c1,c3));
    free(c1);
    free(c2);
    free(c3); 
    return 0;
}