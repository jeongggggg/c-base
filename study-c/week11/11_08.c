#include <stdio.h>

// 파일 입출력 함수

int main(){

    FILE *f;
    int c;
    int n = 0;
    f = fopen("1.txt","r");

    if(f == NULL){
        perror("Error");
    }

    else{
        do{
            c=fgetc(f);

            if(c == 'a'){
                n++;
            }
        } while(c != EOF);

        fclose(f);
        printf("f = %d개 a 포함 \n",n);
    }

    return 0;
}