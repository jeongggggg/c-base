#include <stdio.h>
#include <stdlib.h>

// 동적메모리 할당 예제

int main(){

    int *i,j;

    i = (int*)malloc(10*sizeof(int));
    
    for(j=0;j<10;j++){
        printf("%d번째 값 : ", j+1);
        scanf("%d",(i+j)); // &연산자가 들어간 상태로 scanf 사용
    }

     for(j=0;j<10;j++){
        printf("%d \n", *(i+j)); // scanf를 사용하여 i의 몇번째를 출력
    }

    free(i);

    return 0;

}

