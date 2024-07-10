#include <stdio.h>

/*
    for문을 이용하여 i ~ j년까지 윤년을 찾아 출력
    변수 : 정수형 변수 i, j

    윤년의 조건
    - 4로 나누어 떨어지고, 100으로 나누어 떨어지지 않음
    - 400으로 나누어 떨어짐
*/

int main(){

    int i, j;

    printf("윤년 찾기를 위한 시작 년도와 마지막 년도를 차례로 입력하세요 : \n");
    scanf("%d %d", &i, &j);

    for(i; i<=j; i++){
        if(i % 4 == 0 && i % 100 !=0 || i % 400 == 0){
            printf("%d 년도는 윤년입니다. \n", i);
        }
    }

    return 0;
}

/* while문 사용
int main(){

    int i, j;

    printf("윤년 찾기를 위한 시작 년도와 마지막 년도를 차례로 입력하세요 : \n");
    scanf("%d %d", &i, &j);

    while(i<=j){
        if(i % 4 == 0 && i % 100 !=0 || i % 400 == 0){
            printf("%d 년도는 윤년입니다. \n", i);
        }

        i++;
    }

    return 0;
}
*/