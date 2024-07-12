#include <stdio.h>

struct a{
    int num;
    double total;
};

int main(){
    struct a *pTest;
    struct a p = {1,100.99};

    pTest = &p;

    printf("num = %d total = %lf \n", p.num, p.total);
    printf("num = %d total = %lf \n", (*pTest).num, (*pTest).total);

    return 0;
}