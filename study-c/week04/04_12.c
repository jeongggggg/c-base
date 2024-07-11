#include <stdio.h>

// 두 값을 입력 받아 큰 값을 출력하는 프로그램

int big(int, int);

int main(){

    int i, j;

    printf("두 값을 입력하세요 \n");
    scanf("%d %d", &i, &j);

    printf("두 값 중 큰 값 : %d \n", big(i, j));

    return 0;
}

int big(int a, int b){

    int max;
    
    max = (a > b) ? a : b;

    return max;
}