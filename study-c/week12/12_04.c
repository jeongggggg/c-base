#include <stdio.h>

// 문자열 예제

int main(){

    char c[30];

    printf("문자 입력 : \n");
    
    gets(c); // gets_s(c,30); 공백이 있어도 엔터를 누르기 전까지 출력
   
    printf("입력된 문자열 : %s \n",c);

    return 0;
}