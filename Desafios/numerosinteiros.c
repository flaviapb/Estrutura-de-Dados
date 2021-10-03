/*Escreva um programa que peça que o usuário digite dois números INTEIROS. O seu programa deve verificar se o primeiro número é divisível pelo segundo e retornar na tela do usuário uma mensagem apropriada a verificação feita.*/

#include <stdio.h>

int main () {

    int num1,num2,div;

    printf("Digite os dois numeros inteiros: ");
    scanf("%i %i",&num1,&num2);

    if (num2 == 0)
    {
        printf("Nao foi possivel realizar divisao por 0");
    }

    else if (num1%num2 == 0)
    {
        div = num1/num2;
        printf("Sua divisao entre %i e %i: %i\n",num1,num2,div);
    }

    else
    {
        printf("Divisao nao inteira");
    }

    return 0;
}