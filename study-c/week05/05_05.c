#include <stdio.h>

// 5행 3열의 값을 가진 2차원 배열의 요소

int main(){

    int i, j;

    int a[][3] = {{1,2,3},{1},{ },{0},{0,0}};

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]=%d \t", i,j,a[i][j]);
        }
        printf("\n");
    }

    return 0;
}