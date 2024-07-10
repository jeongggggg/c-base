#include <stdio.h>

// 실수(float)형 변수 height의 값이 150 이상이면 "탑승 가능", 그렇지 않은 경우 "탑승 불가능" 으로 출력
int main(){

    float height;

    printf("키를 입력하세요 : ");
    scanf("%f",&height);

    if(height > 150){
        printf("탑승 가능. \n");
    }
    else{
        printf("탑승 불가능. \n");
    }

    return 0;
}