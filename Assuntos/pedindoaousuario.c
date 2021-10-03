#include <stdio.h>
#include <locale.h> //para caracteres especiais

int main (){
    int base,altura,area;
    
    printf("Digite o valor da base: ");
    scanf("%i",&base);

    printf("Digite o valor da altura: ");
    scanf("%i",&altura);

    area = base * altura;

    setlocale(LC_ALL, "Portuguese"); //chamando a biblioteca dos caracteres
    printf("O valor da ùrea ù: %i\n", area); 
    
    return 0;
}