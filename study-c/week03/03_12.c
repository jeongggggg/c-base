#include <stdio.h>

// for문을 사용하여 구구단 출력
int main(){

    int n;
    int i = 1;

    printf("dan : ");
    scanf("%d", &n);

    for(i = 1; i <= 9; i++){
        printf("%d * %d = %d \n", n, i, n*i);
    }

    return 0;
}