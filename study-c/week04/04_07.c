#include <stdio.h>

// main 함수에서 입력 받은 정수형 변수 year에 대하여 윤년일 경우 1, 평년일 경우 2를 반환하는 int형 함수
// 함수명 : leaf(int year)

int leaf(int);

int main(){

    int year, decision;

    printf("year:");
    scanf("%d", &year);

    decision = leaf(year); // 매개변수에서 넘겨주는 값을 '인수' 라고 한다.

    if(decision == 1){
        printf("윤년 \n");
    }

    else if(decision == 2){
         printf("평년 \n");
    }

    else{
         printf("에러 \n");
    }

    return 0;
}

// int year = 매개변수, 파라미터
int leaf(int year){
    
    // 리턴값이 있는 경우에는 윤년, 평년에 따라서 값을 다르게 리턴해주면 됨
    if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
        return 1;
    }
    else{
        return 2;
    }
}