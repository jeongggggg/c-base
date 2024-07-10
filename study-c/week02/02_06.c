#include <stdio.h>

/*
    - 윤년인지 아닌지 판단하는 프로그램을 작성
    - 정수형 변수 : year
    - 윤년의 조건 : 4로 나누어 떨어지지만 100으로 나누어 떨어지지 않음, 400으로 나누어 떨어짐
*/
int main(){

    int year;

    printf("윤년을 판단할 년도를 입력하세요.");
    scanf("%d",&year);

    if(year%4 == 0 && year%100 !=0 || year%400 == 0){
        printf("윤년입니다. \n");
    }
    else{
        printf("윤년이 아닙니다. \n");
    }
}