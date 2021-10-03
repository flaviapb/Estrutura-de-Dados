#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d",&a);

    printf("Digite o valor de b: ");
    scanf("%d",&b);
                                                        //1001            6
    printf("VALOR DE A ANTES DA TROCA: %d \n", a); //& endereço  e  *valor do endereço

    printf("VALOR DE B ANTES DA TROCA: %d \n", b);

    troca(&a,&b);

    printf("VALOR DE A DEPOIS DA TROCA: %d \n", a);

    printf("VALOR DE B DEPOIS DA TROCA: %d \n", b);

    return 0;
}