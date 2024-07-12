#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

// 동적메모리 할당 예제

int main(){

    int *i,j;

    i = (int *)malloc(10*sizeof(int));
    i = (int *)realloc(i,SIZE*sizeof(int));
    
    for(j=0;j<SIZE;j++){
        printf("%d번째 값 : ", j+1);
        scanf("%d",(i+j));
    }

     for(j=0;j<SIZE;j++){
        printf("%d \n", *(i+j));
    }

    free(i);

    return 0;

}

