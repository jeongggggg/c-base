#include <stdio.h>

/*
    <조건>
    - 실수(double)형 변수 height와 weight 입력 후 체질량계수(BMI) 측정 후 정상인 경우 'good', rm dhl '주의' 라고 출력할 것
    - 변수 : height, weight, result
    - 측정식 : resule=weight/(height*height)
    - switch ~ case 문을 사용할 것
*/

int main(){

    double height, weight, result;
    int temp;

    printf("키와 몸무게를 차례로 입력하세요 \n");
    scanf("%lf%lf", &height, &weight);

    result = weight/(height*height); // 키의 경우 170cm이면 1.7로

    printf("if ~ else 처리의 경우 \n");

    if(result >= 30)
    temp = 1;
    else if(result >= 25)
    temp = 2;
    else if (result >= 20)
    temp = 3;
    else
    temp = 4;

    if(temp == 1 || temp == 2 || temp == 4)
    printf("주의 \n");
    else
    printf("good \n");

    printf("switch ~ case 처리의 경우 \n");

    switch(temp){

        case 1 :
        case 2 :
        case 4 :
            printf("주의 \n");
            break;

        case 3 :
            printf("good \n");
            break;
        
        default : 
            printf("error \n");
            break;
    }

    return 0;

}