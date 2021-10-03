#include <stdio.h>


/*int main(){
    int y, *p, x;

    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p) ++;
    x --;
    (*p) += x;
    y = (*p) + 10;
    printf("Y = %d\n", y);
    printf("X = %d\n", x);
    printf("(*p) = %d\n", *p);

    return 0;

}*/

void main(void){

    int x[3] = {10,20,30};
    int *pt;
    
    pt = &x;
    pt++;
    
    printf("\n%d ",*(--pt));
    printf("\n%d ",*pt);
    
    pt = &x[0];
    printf("\n%d ", *(pt++));
    printf("\n%d ", *pt);
}