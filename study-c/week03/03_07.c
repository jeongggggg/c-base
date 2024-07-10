#include <stdio.h>

/*
    <조건>
    while문을 활용하여 1 ~ i 까지의 제곱값을 차례로 출력
    변수 : 정수형 변수 i, j
*/
int main(){

    int i, j = 1;

    printf("1~i까지의 제곱값을 출력합니다. \n i의 값을 입력하세요 : ");
    scanf("%d", &i);
    
    while(j <= i){
        printf("%d의 제곱값 = %d\n", j, j*j);
        j++;
    }

    return 0;
}