#include <stdio.h>

// 두 정수에 대하여 더하기를 수행한 후 결과를 반환하지 않는 함수 add_print
// 변수 : i, j, sum

void add_print(int i, int j); // void add_print(int, int);
                             // 함수의 원형을 적을 때 변수를 적지 않고, 자료의 타입과 개수만 정확하게 작성해도 됨

int main()
{
    int i,j;

    printf("더하기 연산을 할 두 개의 정수를 차례로 입력하세요 \n");
    scanf("%d %d", &i, &j);

    add_print(i,j); // 리턴값이 없기 때문에 바로 실행, 대입할 필요 X

    return 0;
}

void add_print(int i, int j){
    printf("두 수의 합 : %d \n", i+j);
}