#include <stdio.h>

int main(){

    int a = 5, b = 6, c = 7;
    int v[10] = {0,10,20,30,40,50,60,70,80,90};

    int *pt1, *pt2, *pt3;

    pt1 = &a, pt2 = &b, pt3 = &c;

    pt2 = pt1;

    *pt3 = *pt2 + 2000;


    pt1 = &v[8];
    for(int k = 0;k < 2;k++){
        *pt1 = *pt1 - 5;
        pt1 = pt1 - 3;
    }
    
    return 0;
}
