#include <stdio.h>

int main () {

    int num;
    int fatorial = 1;
    
    while (num != -1)
    {
        scanf("%i",&num);

        if (num != -1)
        {
            for (; num > 1; --num) //--num, mesma coisa que n-=1
            {
                fatorial *= num;
            }

            printf("%i\n",fatorial);
            fatorial = 1;
        }
    }
    
    return 0;
}