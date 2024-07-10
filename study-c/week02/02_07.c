#include <stdio.h>

/*
    <조건>
    - 정수형 변수 num의 입력 값에 대하여 num의 일의 자리수 출력 단, 1000보다 큰 경우 "error 입니다."
    - 출력 변수 : num

    <결과>
    num : 99
    9

*/
int main(){

    int num;

    printf("num : ");
    scanf("%d",&num);

    if(num > 1000){
        printf("error \n");
    }
    else{
        printf("%d \n", num%10); // 0 ~ 9
    }

    return 0;
}