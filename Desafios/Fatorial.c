/* Escreva um programa capaz de calcular o fatorial de um número. Exemplo: fatorial de 5 é 5 x 4 x 3 x 2 x 1 = 120 */


#include <stdio.h>

int main() {

    int num;
    int fatorial = 1;

    printf("Digite um numero para fatorar: ");
    scanf("%i",&num);

    for (; num > 1; --num) //--num, mesma coisa que n-=1
    {
        fatorial *= num;
    }
            
    printf("Seu numero fatorado: %i\n",fatorial);
    return 0;

    
}