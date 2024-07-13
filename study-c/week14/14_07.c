#include <stdio.h>

// 1~10사이의 입력 숫자 빈도 구하기

int main(){

   int a[SIZE] = {0}; // int a[10] = {0};
   int i, value;

   for(i=0; i<SIZE; i++){ //for(i=0; i<10; i++){

    printf("enter number(1~10) \n");
    scanf("%d",&value);

    if(value > 10 && value < 1){
        break;
    }

    // a[value]++; -> 0~9까지 10이라는 인텍스가 없어서 못함 error
    a[value-1]++;
   }


    return 0;
}