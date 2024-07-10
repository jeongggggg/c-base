#include <stdio.h>

// 실수(double)형 변수 height와 weight 입력 후 체질량계수(BMI)의 측정값을 출력
/*
    변수 : height, weight, result
    측정식 : result = weight/(height*height)
*/
int main(){

    double height, weight, result;

    printf("키와 몸무게를 차례로 입력하세요 : ");

    scanf("%lf %lf", &height, &weight);

    result = weight/(height*height);

    if(result >= 30){
        printf("비만\n");
    }
    else if(result >= 25){
        printf("과체중\n");
    }
    else if(result >= 20){
        printf("정상\n");
    }
    else{
        printf("저체중\n");
    }

    return 0;
}