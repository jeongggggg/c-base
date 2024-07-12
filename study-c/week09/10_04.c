#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/*
    <조건>에 맞는 프로그램 
    // p1의 값을 배열 형태로 입력 받고 출력하기
    // p2의 값을 포인터 형태로 입력 받고 출력하기
    // p1의 크기를 5로 realloc하고 값들을 출력하기
*/

int main(){

    int *p1, *p2, i, j;

    p1 = (int *)malloc(3 * sizeof(int)); //4 * 3
    p2 = (int *)calloc(3,sizeof(int)); //4 * 3

    for(i = 0; i < 3; i++){
        printf("%d번째 p1의 값 : ", i);
        scanf("%d", &p1[i]);
    }

    for(i = 0; i < 3; i++){
            printf("%d번째 p1의 값 : %d \t", i, p1[i]);
    }
    printf("\n");

    // p2의 값을 포인터 형태로 입력받고 출력하기
    for(i = 0; i < 3; i++){
        printf("%d번째 p2의 값 : ", i);
        scanf("%d", (p2+i));
    }

    for(i = 0; i < 3; i++){
        printf("%d번째 p2의 값 : %d \t", i, *(p2+i));
    }

    printf("\n");

    // p1의 크기를 S로 realloc하고 값들을 출력하기
    p1 = (int *)realloc(p1,SIZE*sizeof(int));

    for(i = 0; i < SIZE; i++){
        printf("%d번째 p1의 값 : %d \t", i, p1[i]);
    }

    free(p1);
    free(p2);

    return 0;
    
}