#include <stdio.h>

int main(){

    int a[3]={1,2,3};

    printf("a의 주소 = %p \n", &a);
    printf("a의 주소에 들어있는 값 = %d \n", *a);

    return 0;
}