#include <stdio.h>
#define N 6

// 실수(float) 타입으로 6명의 키(height)를 0으로 초기화하여 저장하는 배열 height2를 선언하고 각 요소 출력
// N은 #define으로 설정할 것

int main(){

    float height[N] = {0};

    int i;

    for(i=0;i<N;i++){
        printf("height[0]=%f \n", height[i]);
    }
    
    return 0;
}