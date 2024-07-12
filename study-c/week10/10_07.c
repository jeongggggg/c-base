#include <stdio.h>
#define BIG(x,y) ((x) > (y)?(x):(y))

// #define을 이용하여 (x,y) 중 큰 값을 리턴하는 프로그램

int main(){

    int i = 10, j = 19;

    printf("big = %d \n", BIG(i,j));

    return 0;
}