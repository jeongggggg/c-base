#include <stdio.h>

// 실수(float) 타입으로 6명의 키(height)를 0으로 초기화하여 저장하는 배열 height2를 선언하고 각 요소 출력
// float height[6];
// 모든 요소(element)를 입력 후 출력할 수 있도록 반복문 이용

int main(){

    float height[6] = {0};

    int i;

    for(i=0;i<6;i++){
        printf("height[%d]=", i);
        scanf("%f",&height[i]);
    }

    for(i=0;i<6;i++){
        printf("height[i]=%f \n", height[i]);
    }
    

    return 0;
}