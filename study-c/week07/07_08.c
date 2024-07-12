#include <stdio.h>

// 전역 변수를 사용, i에 대한 설명

int i; // 전역 변수 : 값 '0'

int main(){
    printf("i(1) = %d \n", i);     // 0

    int i = 10;

    printf("i(2) = %d \n", i);     // 10

    printWhat();

    return 0;
}

void printWhat(){
    printf("i(3) = %d \n", i);      // 0
}