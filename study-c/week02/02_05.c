#include <stdio.h>

/*
    1~12 사이의 숫자를 정수형 변수 month로 입력 받고
    - 3 , 4, 5 : "봄입니다."
    - 6, 7, 8 : "여름입니다."
    - 9, 10, 11 : "가을입니다."
    - 12, 1, 2 : "겨울입니다"
    - 1~12 사이의 수가 아닌 경우 : "잘못 입력하셨습니다." 출력
    
    * 변수 : month
    * 조건문 : switch ~ case 사용
*/
int main(){

    int month;

    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    switch(month){ // if(month == 3 || month == 4 || month == 5)
        case 3:
        case 4:
        case 5:
                    printf("봄입니다 \n");
                    break;
        case 6:
        case 7:
        case 8:
                    printf("여름입니다 \n");
                    break;

        case 9:
        case 10:
        case 11:
                    printf("가을입니다 \n");
                    break;
        case 12:
        case 1:
        case 2:
                    printf("겨울입니다 \n");
                    break;

        default :
                    printf("잘못 입력하셨습니다 \n");
                    break;
    }

    return 0;
}