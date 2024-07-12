#include <stdio.h>

typedef struct st{
    
    int num;
    double point;
    char name[20];
}St;

int main(){

    St a;
    St *pa;

    pa = &a;

    printf("num : ");
    scanf("%d",&a.num);

    printf("num : %d \n", (*pa).num);

    printf("point : ");
    scanf("%lf",&(*pa).point);

    printf("point : %lf \n",(*pa).point);

    return 0;
}