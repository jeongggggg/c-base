#include <stdio.h>

// 정수 n을 입력함
// 2~n단까지 결과를 같이 출력함

int main(){

    int gugu[9][9],i,j;
    int n;

    printf("몇단까지 출력할까요 : ");
    scanf("%d", &n);

    for(i=0;i<n-1;i++){

        printf("%d단 \n", i+2);

        for(j=0;j<9;j++){
            gugu[i][j] = (i+2)*(j+1);
            printf("%d * %d = %d \t",i+2,j+1,gugu[i][j]);
        }

        printf("\n");
    }

    return 0;
}