#include <stdio.h>

// 두 정수에 대하여 더하기를 수행한 후 결과를 반환하는 함수 add
// 변수 : i, j, sum

int add(int i, int j);
int main(){

    int i, j, sum;

    printf("더하기 연산을 할 두개의 정수를 차례로 입력하세요 \n");
    scanf("%d %d", &i, &j);

    sum = add(i, j); // *값만 복사해서 아래 함수에 전달 // 각각 4byte // 리턴값이 있기 때문에 리턴값을 받는 변수가 반드시 필요함

    printf("두 수의 합 : %d \n", sum);

    return 0;
}

int add(int i, int j){ // 값을 복사한 것이기 때문에 다른 메모리이고, 함수 종료 시 메모리도 지워짐
    return i+j;
}