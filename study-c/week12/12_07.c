#include <stdio.h>
#include <ctype.h>


// 대소문자 변환 라이브러리
int main(){

    char a = 'a';

    if(islower(a)){
        printf("a = %c \n", a - 32);
    }

    char B = 'B';

    if(isupper(B)){
        printf("B = %c \n", B + 32);
    }

    return 0;
}