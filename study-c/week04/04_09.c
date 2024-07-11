#include <stdio.h>

// Main 함수에서 입력 받은 n에 대하여, 1~n까지의 팩토리얼을 출력하는 int 타입의 함수
// 함수명 : fac
// 재귀함수의 형식을 적용하여 구현

int fac(int);

int main(){

    int n;

    printf("N :");
    scanf("%d", &n);

    printf("%d \n", fac(n));

    return 0;
}

int fac(int a){

    int i;

    if(a <= 1){
        return 1;
    }

    else{
        return fac(a-1)*a;
    }
}