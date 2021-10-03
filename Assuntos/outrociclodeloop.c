#include <stdio.h>

int main () {

    int cont = 1;
    float cont2 = 10;

    while (cont <= 10)
    {
        printf("%i\n",cont);
        cont ++;
    }

    while (cont2 <= 20)
    {
        printf("\n%f",cont2/2);
        cont2 ++;
    }
    
    return 0;
}