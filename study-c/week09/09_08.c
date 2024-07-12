#include <stdio.h>

struct a{
    int num;
    double total;
};

int main(){
    struct a b;
    struct a *aa;
    b.num = 1;
    b.total = 99.9;

    aa = &b;

    printf("num = %d total = %lf \n", b.num, b.total);
    printf("num = %d total = %lf \n", (*aa).num, (*aa).total); //아래 출력결과와 같음
    printf("num = %d total = %lf \n", aa ->  num, aa -> total);

    return 0;
}