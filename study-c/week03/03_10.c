#include <stdio.h>

// do ~ while 사용하여 10~0까지 출력
int main()
{

    int i = 10;
    
    do{

        printf("i=%d\n", i);
        i--;

    } while(i >= 0);

    return 0;
}