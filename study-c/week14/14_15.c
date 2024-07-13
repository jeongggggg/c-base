#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(){

    int a[SIZE] = {0};
    char *name;
    int *m,j;

    m = (int *)malloc(SIZE*sizeof(int));
    name = (char *)malloc(20*sizeof(char));

    printf("name : \n");
    scanf("%s",name); // -> 사이즈가 있는 경우에는 scanf_s, scanf를 사용한 경우에는 ("%s",name);

    for(j=0;j<SIZE;j++){
        printf("m[%d를 입력하세요:", j);
        scanf("%d",(m+j));
        printf("a[%d를 입력하세요:", j);
        scanf("%d",(a+j));
    }

    for(j=0;j<SIZE;j++){
        printf("m[%d]=%d \n",j,*(m+j));
    }

    printf("\n\n");

    for(j=0;j<SIZE;j++){
        printf("a[%d]=%d \n",j,*(a+j));
    }
    printf("name=%s \n", name);
    free(m);
    return 0;
}