#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 // 4byte짜리 3개가 할당 -> 해당 주소를 m에 줌


// 주소로 접근해 데이터를 하나씩 입력받고 주소로 접근해서 주소안에 들어있는 값을 하나씩 출력하는 프로그램
int main(){

    int a[SIZE] = {0};
    int *m, j;

    m = (int *)malloc(SIZE*sizeof(int)); // 4byte짜리 3개가 할당 -> 해당 주소를 m에 줌
    
    for(j=0;j<SIZE;j++){
        printf("m[%d]를 입력하세요 :", j);
        scanf("%d",(m + j)); // (m + j) -> 하나하나 입력받을 수 있음
        printf("a[%d]를 입력하세요 :", j);
        scanf("%d",(a + j)); // (m + j) -> 하나하나 입력받을 수 있음
    }

    for(j=0;j<SIZE;j++){
        printf("m[%d]=%d \n",j, *(m+j)); // m[j], * -> 입력받은 데이터에 대해 간접 참조 연산자를 이용해 주소에 접근. 주소 안에 들어있는 값을 출력할 수 있도록 함.
    }
    printf("\n \n");

    for(j=0;j<SIZE;j++){
        printf("a[%d]=%d \n",j, *(a+j)); // a[j], * -> 입력받은 데이터에 대해 간접 참조 연산자를 이용해 주소에 접근. 주소 안에 들어있는 값을 출력할 수 있도록 함.
    }

    free(m);

    return 0;
}