#include <stdio.h>
#include <string.h>

// 각 행의 문자열을 입력받고 출력

int main(){

    char fruit[3][10]; // 2차원 배열

    int i;

    printf("fruit 입력 \n");
    for(i=0;i<3;i++){
        scanf("%s",fruit[i]); // 각각의 행에 대해서 입력을 받음(행의 주소), &fruit[i](x) -> 주소의 주소를 저장하는 곳이 됨
    }

    printf("fruit 출력 \n");
    for(i=0;i<3;i++){
        printf("%s \n",fruit[i]);
    }


    return 0;
}