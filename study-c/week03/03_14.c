#include <stdio.h>

// while 문을 사용하여 구구단 출력
int main(){

    int n;
    int i = 1;

    printf("dan : ");
    scanf("%d", &n);

    while(i <= 9){
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }

    return 0;
}