#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade para validar: ");
    scanf("%i",&idade);

    if (idade < 5)
    {
        printf("Um bebezinho");
    }

    else if (idade >= 5 && idade <=14)
    {
        printf("Criancinha");
    }

    else if (idade > 14 && idade <= 30)
    {
        printf("Adulto");
    }

    else
    {
        printf("Experiente dms");
    }
    
    return 0;
}