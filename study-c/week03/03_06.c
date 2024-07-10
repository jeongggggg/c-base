#include <stdio.h>

/*
    <조건>
    - for문을 이용한 구구단 출력하기
    - 출력하고 싶은 단 입력 후 해당 단을 출력
    - 변수 : 정수형 변수 dan, i
*/
int main(){

    int dan, i;

    printf("dan : ");
    scanf("%d", &dan);

    for(i=1; i<=9; i++){
        printf("%d * %d = %d\n", dan, i, dan*i);
    }

    return 0;
}