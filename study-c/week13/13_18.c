#include <stdio.h>

// 삽입정렬 내림차순

void swap(int *, int *);

int main(){

    int a[5] = {0};
    int i,j;

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("%d", a[i]);
    }

    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(a[i] < a[j]){  // 이 부분만 변경하면 됨
                swap(&a[i],&a[j]);
            }
        }
    }

    printf("\n");

    for(i=0;i<5;i++){
        printf("%d", a[i]);
    }

    return 0;
}