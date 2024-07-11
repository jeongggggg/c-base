#include <stdio.h>

int main(){

    int i = 10;
    int *ptr = &i;

    printf("&i = %d i = %d \n", &i,i);
    printf("ptr = %d *ptr=%d \n", ptr, *ptr);

    printf("case 1 ptr++ \n");
    ptr++;
    printf("&i = %d i = %d \n", &i,i);
    printf("ptr = %d *ptr=%d \n", ptr, *ptr);

    ptr = &i;
    printf("case 2 (*ptr)++ \n");
    (*ptr)++;
    printf("&i = %d i = %d \n", &i,i);
    printf("ptr = %d *ptr=%d \n", ptr, *ptr);

    ptr = &i;
    printf("case 3 *(++ptr) \n");
    *(++ptr);
    printf("&i = %d i = %d \n", &i,i);
    printf("ptr = %d *ptr=%d \n", ptr, *ptr);

    ptr = &i;
    printf("case 4 *(--ptr) \n");
    *(--ptr);
    printf("&i = %d i = %d \n", &i,i);
    printf("ptr = %d *ptr=%d \n", ptr, *ptr);

    return 0;
}
