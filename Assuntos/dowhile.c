#include <stdio.h>

int main () {

    int cont = 0;

    while (cont != 0 )
    {
        printf("Teste\n");
    }
    
    do
    {
        printf("Teste2\n");
    } while (cont != 0);
    
    return 0;
}

// No do whole, ele executa pelo menos uma vez, ou seja, ele executa verifica e fica nesse loop, já o while verifica para só assim verificar. 
