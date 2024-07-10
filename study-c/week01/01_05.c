#include <stdio.h>
#define PI 3.14

/*
    - PI를 3.14 기호상수로 설정
    - 실수(float)형태의 r 출력
    - 원의 넓이(area) 출력
*/
int main() {

    float r;

    printf("r:");

    scanf("%f", &r);

    printf("r=%f area=%f\n", r, r*r*PI);
    
    return 0;
}