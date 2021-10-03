#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua idade: ");
    scanf("%i",&idade);

    if (idade >= 18) {
        printf("Bebidas alcoolicas liberadas\n");
    }
    
    else{
        printf("Volte daqui algum tempo\n");
    }
    
    return 0;

}