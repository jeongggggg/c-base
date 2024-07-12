#include <stdio.h>

int main(){

    int i = 1;
    printf("첫번째 i = %d \n", i);

    {
        int i = 2;
        printf("두번째 i = %d \n", i);
    }

    printf("첫번째 i = %d \n", i);

    return 0;
}