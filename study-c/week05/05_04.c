#include <stdio.h>

/*
    int a[3]={1,2,3};
    int b[3]={1};
    int c[3];
    int d[3]={0};
    int e[3]={0,0};

    위의 배열 출력
*/

int main(){
    
    int i, j;

    int a[3]={1,2,3};
    int b[3]={1};
    int c[3];
    int d[3]={0};
    int e[3]={0,0};

    for(j=0;j<3;j++){
        printf("a[%d]=%d\n", j, a[j]);
    }
    
    printf("\n");

    for(j=0;j<3;j++){
        printf("b[%d]=%d\n", j, b[j]);
    }

    printf("\n");
    
    for(j=0;j<3;j++){
        printf("c[%d]=%d\n", j, c[j]);
    }

    printf("\n");

    for(j=0;j<3;j++){
        printf("d[%d]=%d\n", j, d[j]);
    }

    printf("\n");

    for(j=0;j<3;j++){
        printf("e[%d]=%d\n", j, e[j]);
    }

    printf("\n");

    return 0;
}