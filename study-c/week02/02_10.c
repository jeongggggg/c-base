#include <stdio.h>

/*
    <조건>
    - 정수 r을 입력 받고, (1+n)/2 의 값이 50 이상이면 '유의미', 그렇지 않으면 '무의미' 라고 출력할 것
    - 변수 : n
*/
int main(){

    int n;

    printf("n를 입력하세요 : ");
    scanf("%d",&n);

    if((1+n)/2 >= 50){
        printf("유의미 \n");
    }
    else{
        printf("무의미 \n");
    }

    return 0;
}