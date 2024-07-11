#include <stdio.h>

// main 함수에서 입력 받은 정수형 변수 year에 대하여 "윤년" 인지 "평년" 인지 출력하는 void형 함수
// 함수명 : leaf(int year)

void leaf(int);

int main(){

    int year;

    printf("year:");
    scanf("%d", &year);

    leaf(year);

    return 0;
}

// 리턴값이 없는 경우에는 Leaf 함수 내에서 결과를 출력하는 것까지 이루어져야 함
void leaf(int year){
    
    if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
        printf("윤년 \n");
    }
    else{
        printf("평년\n");
    }
}