#include <stdio.h>

int main () {

    int num1;
    float num2;
    char letra;

    printf("Digite sua letra: ");
    scanf("%c", &letra);

    printf("Digite o valor inteiro: ");
    scanf("%i", &num1);

    printf("Digite o valor decimal: ");
    scanf("%f", &num2);

    printf("%i\n",num1);
    printf("%f\n",num2);
    printf("%c\n",letra);

    return 0;
}