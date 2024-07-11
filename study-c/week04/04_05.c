#include <stdio.h>

// 사용자 정의 함수에서 입력 받은 n에 대하여, 1~n까지의 합을 구하여 출력하는 void 타입의 함수
// 함수명 sumN()

void sumN();

// main함수의 일이 적음
int main(){

    sumN();

    return 0;
}

void sumN(){

    int n, i, sum = 0;

    printf("N : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    
    printf("1~%d까지의 합 : %d \n", n, sum);
}