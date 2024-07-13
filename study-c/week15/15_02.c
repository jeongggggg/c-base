#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/*
    <동적 메모리 활용>
    - 정수 변수인 SIZE 만큼의 동적 메모리를 할당하고 해당 메모리의 크기만큼 정수를 저장한 후, 출력
    - 동적 메모리가 바르게 할당되었는지 확인
    - #define으로 SIZE 할당
*/

int main(){

    int *n;
    int i;

    n = (int*)malloc(SIZE*sizeof(int));

    if(n == NULL){
        printf("error \n");
        exit(1);
    }

    for(i = 0; i < SIZE; i++){
        printf("%d번째 num =", i + 1);
        scanf("%d", (n + i));
    }

    for(i = 0; i < SIZE; i++){
        printf("%d번째 num = %d \n", i + 1, *(n + i));
    }

    free(n);

    return 0;
}