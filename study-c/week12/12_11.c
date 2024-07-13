#include <stdio.h>
#include <string.h>

int main(){

    char fruit[3][10] = { // 2차원 배열을 사용한 문자열 출력
        "apple", // 하나의 행
        "pear",
        "orange"
    };

    int i;

    for(i=0;i<3;i++){
        printf("%s\n",fruit[i]); // 첫번째 형의 주소
    }

    return 0;
}