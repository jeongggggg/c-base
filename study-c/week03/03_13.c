#include <stdio.h>

// do while 문을 사용하여 구구단 출력
int main(){

    int n;
    int i = 1;

    printf("dan : ");
    scanf("%d", &n);

    do{
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }while(i<=9);

    return 0;
}