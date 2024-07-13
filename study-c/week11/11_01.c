#include <stdio.h>

// fsans : 파일 입출력 함수
int main(){

    char a[10];

    fsans(stdin,"%s",a);    // 입력
    fsans(stdout,"%s \n",a); // 표준 출력
    fsans(stderr,"%s \m",a); // 표준 에러

    return 0;
}