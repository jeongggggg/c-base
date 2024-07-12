#include <stdio.h>
#include <time.h>

// 지역 변수 n에 대하여, 재귀함수를 이용하여 n의 팩토리얼과 피보나치 값을 구하는 프로그램
// 재귀적인 팩토리얼 함수 계산
// 07_10 예제를 register 변수로 변경

// register의 경우가 더 빠르다.

int fac(int);
int fibo(int);

int main(void){

    register int n = 20, i;

    time_t start, end;

    start = clock();
    for(i=1;i<=n;i++){
        printf("%d!은 %d입니다. \n", i, fac(i));
    }

    for(i=1;i<=n;i++){
        printf("%d의 피보나치 값은 %d입니다. \n", i, fibo(i));
    }

    end = clock();
    printf("time = %lf \n", (double)(end - start) / 1000); // 마이크로초
}

int fac(register int n){ //5! 5*4*3*2*1

    if(n <= 1){
        return 1;
    }

    else{
        return n * fac(n - 1);
    }
}

int fibo(register int n){ // 1,1,2,3,4,8,13...
    
    if(n == 1 || n == 2){
        return 1;
    }

    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}