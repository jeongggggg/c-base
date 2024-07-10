#include <stdio.h>

/*
    <조건>
    - 실수(float)형 변수 height의 값이 145 이상이고 weight가 40 이상이면 "탑승가능" 
    - 그렇지 않은 경우 "탑승 불가능" 출력
    - 변수 : height, weight
*/
int main(){

    float height, weight;

    printf("키와 몸무게를 차례대로 입력하세요 : \n");
    scanf("%f %f",&height, &weight);

    if(height >= 145 && weight >= 40){
        printf("탑승 가능. \n");
    }
    else{
        printf("탑승 불가능. \n");
    }

    return 0;
}