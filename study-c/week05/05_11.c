#include <stdio.h>

// 2차원 배열 출력

int main(){

    int num1[2][2] = {{1,0},{100,200}};
    int num2[2][2] = {1,2,3};
    int num3[2][2] = {0,0};
    int num4[2][2] = {1,2};
    int num5[][2] = {1,2,3,4,5,6};

    int i, j, size;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("num1[%d][%d]=%d \n", i, j, num1[i][j]);
            printf("num2[%d][%d]=%d \n", i, j, num2[i][j]);
            printf("num3[%d][%d]=%d \n", i, j, num3[i][j]);
            printf("num4[%d][%d]=%d \n", i, j, num4[i][j]);
        }
    }

    size = sizeof(num5) / sizeof(num5[0]);

    for(i=0;i<size;i++){
        for(j=0;j<2;j++){
            printf("num5[%d][%d]=%d \n", i, j, num5[i][j]);
        }
    }

    return 0;
}