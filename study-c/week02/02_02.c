#include <stdio.h>

// 정수형 변수 num의 입력 값이 100보다 큰 경우 "큰 수 입니다."로 출력
int main(){

    int num;

    printf("num : ");
    scanf("%d",&num);

    if(num > 100){
        printf("큰 수 입니다. \n");
    }
}