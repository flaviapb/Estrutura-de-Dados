#include <stdio.h>
#include <stdbool.h>

bool par_impar(int num){
    bool t = true;
    if (num%2==1)
    {
        t = false;
    }

    return t; 
}

int main(){

    int num1;
    bool par;

    printf("Digite o valor: ");
    scanf("%i", &num1);

    par = par_impar(num1);

    if (par == true)
    {
        printf("O numero %i e par\n", num1);
    }

    else{
        printf("O numero %i e impar\n",num1);
    }
    
    return 0;
}
