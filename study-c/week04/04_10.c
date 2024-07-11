#include <stdio.h>
#include <stdlib.h> // abs 사용을 위한 호출
#include <math.h>

int main(){

    printf("%lf \n", ceil(3.54)); // 0에서 멀어지고 싶어함
    
    printf("%lf \n", floor(3.54)); // 0에서 가까워지고 싶어함
    
    printf("%lf \n", fabs(-3.54)); // 실수의 절댓값
    
    printf("%d \n", abs(-1)); // 정수의 절댓값
    
    printf("%lf \n", pow(3,4)); //3의 4승
    
    printf("%lf \n", sqrt(64)); // 루트 64

    return 0;
}