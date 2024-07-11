#include <stdio.h>

// Main 함수에서 입력 받은 n에 대하여, 1~n까지의 합을 구하여 출력하는 int 타입의 함수
// 함수명 : sumN
// 재귀함수의 형식을 적용하여 구현

int sumN(int);

int main(){

    int n;

    printf("N : ");
    scanf("%d", &n);
    printf("%d \n", sumN(n));

    return 0;
}

int sumN(int a){

    if(a <= 1){
        return 1;
    }

    else{
        return sumN(a-1)+a;
    }
}