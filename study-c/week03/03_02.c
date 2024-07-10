#include <stdio.h>

// do ~ while 사용하여 초기값 1부터 10까지 1씩 증가
int main()
{

    int i = 1;
    
    do{
        printf("i=%d\n", i);
        i++;
    } while(i <= 10);

    return 0;
}