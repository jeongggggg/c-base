#include <stdio.h>

// Main 함수에서 입력 받은 n에 대하여, 1~n까지의 합을 구하여 출력하는 void 타입의 함수
// 함수명 sumN(int n)

void sumN(int); // void sumN(int n);

int main(){

    int n;

    printf("N : ");
    scanf("%d", &n);

    sumN(n);

    return 0;
}

void sumN(int a){

    int i, sum = 0;

    for(i=1;i<=a;i++){
        sum = sum+i;
    }
    
    printf("1~%d까지의 합 : %d \n", a, sum);
}