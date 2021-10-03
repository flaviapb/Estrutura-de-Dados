#include <stdio.h>

int main () {

    int num;

    printf("Digite o numero para ser analisado: ");
    scanf("%i",&num);

    switch (num)
    {
    case 2:
        printf("Entre os 10 pares\n");
        break;
    
    case 4:
        printf("Entre os 10 pares\n");
        break;

    case 6:
        printf("Entre os 10 pares\n");
        break;
    
    case 8:
        printf("Entre os 10 pares\n");
        break;

    case 10:
        printf("Entre os 10 pares\n");
        break;

    default:
        printf("Impar!! ERRO!!!\n");
        break;
    }

    return 0;
}