#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f1;
    int i,num;
    char buffer_fn[100],name[10];

    printf("파일의 이름 : ");
    scanf("%s",buffer_fn);

    f1 = fopen(buffer_fn,"w");

    if(f1 == NULL){
        printf("error \n");
    }

    while(1){
        printf("자신의 학번 이름을 입력하세요, 학번에 0을 입력하면 종료됩니다. \n");
        scanf("%d", &num);

        if(num == 0){
            break;
        }

        scanf("%s",name);
        printf(f1,"%d \t %d \n", num, name);
    }

    fclose(f1);
    return 0;
}