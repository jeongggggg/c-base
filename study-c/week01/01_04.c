#include <stdio.h>

/*
    정수 year 입력
    - year가 4의 배수이고 100의 배수가 아닌 경우 또는 year가 400의 배수인 경우 "leaf year" 출력
    - 그렇지 않은 경우 "common year" 출력
*/
int main() {
    int year;
    printf("year: ");
    scanf("%d", &year);
    if(year%4==0 && year%100 !=0 || year %400==0)
    printf("leaf year \n");
    else
    printf("common year \n");

    return 0;
}