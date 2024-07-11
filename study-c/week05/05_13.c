#include <stdio.h>

// 배열을 하나씩 출력하는 프로그램
// int num[2][2] = {{1,2},{3,4}};

int main(){

    int num[2][2] = {{1,2},{3,4}};
    int i, j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("num[%d][%d]=%d\n", i,j,num[i][j]);
        }
    }

    return 0;
}