#include <stdio.h>

// 문자열 예제
// a,b입력을 우선 받고, b가 문자열 끝에 오기 전까지 출력

int main(){

    char a; // 1)
    char b[10]; //2)
    int i = 0;

    printf("a=");
    scanf("%c", &a); //3)

    printf("b=");
    scanf("%s",b); // 4) b는 배열의 주소

    while(b[i] != NULL){ // 5)
        printf("%c",b[i]); // 6)
        i++;
    }
    
    printf("\na = %c b = %s \n",a,b); // 7)
    return 0;
}