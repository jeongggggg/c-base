#include <stdio.h>

// SWAP 알고리즘

int main(){

    // a와 b값을 교환함
    int a = 1, b = 2;
    int temp;

    printf("a = %d b = %d \n",a,b); //1,2

    // 교환 방법
    a = b; // a=2,b=2
    b = a; // b=2,a=2

    printf("a = %d b = %d \n",a,b);

    return 0;
}