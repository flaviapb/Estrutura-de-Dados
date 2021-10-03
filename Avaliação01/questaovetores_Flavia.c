#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int n1, int *v2, int n2){

    int i;

	int *v3 = (int*)malloc(sizeof(int)*(n1+n2));

    for(i = 0; i < n1; i++){     /*coloca numeros de v1 em v3*/
        v3[i] = v1[i];
    }

    for(int j = 0; j < n2; j++){     /*coloca numeros de v2 em v3*/
        v3[n1 + j] = v2[j];
        i++;
    }

	return v3;
}

int main(){
    
	int n1, n2;
    printf("Digite o tamanho do vetor 1: ");
    scanf("%d" , &n1);
    printf("\n");

    int v1[n1];

    for(int i = 0; i < n1; ++i){
        printf("Digite o %d elemento do primeiro vetor: ",i+1);
        scanf("%d", &v1[i]);
    }

    printf("\n");

    printf("Digite o tamanho do vetor 2: ");
    scanf("%d",&n2);

	int v2[n2];

	printf("\n");

    for(int j = 0; j < n2; ++j){
        printf("Digite o %d elemento do segundo vetor: ", j+1);
        scanf("%d", &v2[j]);
    }
	
	printf("\n");
	
    int* v3 = uniao(v1,n1,v2,n2);

	for(int a = 0; a < n1+n2; a++)
    {
        printf("[%d]-", *( v3+ a));
	}
    
	free(v3);
		
    return 0;
}