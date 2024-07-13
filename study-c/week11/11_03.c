#include <stdio.h>

// scanf 코드 예제

int main(){
    
    int n;
    float fn;
    char a1,a2,a3;

    scanf("%d",&n); //문자열 형태로 입력, 이후 %d형태로 변환
    scanf("%f",&fn); //문자열 형태로 입력, 이후 %f형태로 변환

    getchar(); // 버퍼에 남아있는 엔터 또는 특수문자 없어짐

    scanf("%c%c%c", &a1, &a2, &a3);

    printf("n=%d \n fn = %f \n a1 = %c \n a2 = %c \n a3 = %c \n", n,fn,a1,a2,a3);
}