#include <stdio.h>

/*
    - 정수 a값을 입력 받음
    - a가 2의 배수이면 "even number" 출력, 그렇지 않으면 "odd number" 출력
    - 조건연산자 사용할 것
*/
int main() {

    int a;

    printf("a=");
    
    scanf("%d", &a);

    (a % 2 == 0) ? printf("even number \n") : printf("odd number \n");

    return 0;
}