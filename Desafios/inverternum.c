/*Escreva um programa que inverta as cifras de um número INTEIRO POSITIVO digitado pelo usuário. Exemplo: Se o usuário digitar 1234 o programa deve retornar na tela 4321.*/

#include <stdio.h>

int main () {

    int num,resto;

    printf("Digite um numero: ");
    scanf("%i",&num);

    if (num >= 0)
    {
        do
        {
            resto = num % 10;
            printf("%i",resto);
            num /= 10;
        } while (num != 0);
        
            printf("\n");
    }
    
    else{

        num = num * -1;
        printf("-");
        do
        {
            resto = num % 10;
            printf("%i",resto);
            num /= 10;
        } while (num != 0);
        
            printf("\n");
    }

    return 0;
}