#include <stdio.h>

// 문자열 예제

int main(){

    char c[30];

    printf("문자 입력 : \n");
    
    scanf("%s",c); // 공백 나오기 전까지 출력

    printf("입력된 문자 : %s \n",c);

    return 0;
}