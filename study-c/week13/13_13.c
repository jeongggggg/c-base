#include <stdio.h>
#define SIZE 5

int * getArr();

int main(){

    int *a;
    int i;

    a = getArr();

    for(i=0;i<SIZE;i++){
        printf("a[%d] = %d \n", i, a[i]);
    }

    return 0;
}

// setArr를 통한 입력되는 과정
int * getArr(){

    int i;
    static int a[SIZE] = {0};

    for(i=0;i<SIZE;i++){
        printf("a[%d] = \n", i);
        scanf("%d",a+i);
    }

    return a; // 배열의 이름은 배열을 시작하는 주소, 반환형태는 포인터가 된다.
}