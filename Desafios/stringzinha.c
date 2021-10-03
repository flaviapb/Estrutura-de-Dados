#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char string[101];
    int x, i, a;

    printf("Digite sua frase: ");
    gets(string);
    printf("%s\n",string);

    for(i=0; i<strlen(string); i++){
        if(string[i]==' '){
            string[i]= '*';
        }   
    }

    printf("String sem espacos em branco: %s\n", string);

    return 0;
}
