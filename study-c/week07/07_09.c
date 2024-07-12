#include <stdio.h>
// #define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>

/*
    번호 맞추기 프로그램
    - rand 함수로 얻은 1~20사이의 임의의 숫자(real)를 알아 맞추는 프로그램
    - 총 3번의 기회를 줌
*/

int findNumber(int,int);

int main(){

    int i, j, real, num;

    srand(time(NULL));
    real = rand() % 20 + 1;

    for(;;){

        printf("1~20사이의 숫자 중 임의의 숫자를 맞춰보세요. 기회는 3번 \n");
        scanf("%d", &num);

        j = findNumber(num,real);

        if(j == 1){
            printf("correct \n");
            break;
        }
        else if(j == 2){
            printf("again \n");
        }
        else if(j == 0){
            printf("time over \n");
            break;
        }
    }

    return 0;
}

int findNumber(int num, int real){

    static int i = 0, j;

    i++;

    if(i == 3){
        return 0;
    }

    if(num == real){
        return 1;
    }

    else{
        return 2;
    }
}

