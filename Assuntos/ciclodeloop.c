#include <stdio.h>

int main () {

    int contador;
    int num = 1;

    for (contador = 1; contador <= 10; contador += 1)
    {
        printf("%i\n",contador);
    }
    
    for (contador = 2; contador <= 10; contador += 2)
    {
        printf("\n%i",contador);
    }

    return 0;
}