#include <stdio.h>

// 구조체 a의 주소를 저장하는 포인터 변수 ap를 선언하고, a의 주소를 ap에 대입하는 프로그램

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){
    
    struct student a[3];
    struct student *ap;

    ap = a;

    int i;
    for(i = 0; i < 3; i++){
        scanf("%d %f %f %f",&a[i].num, &a[i].kor, &a[i].eng, &a[i].c);
    };

    for(i = 0; i < 3; i++){
        printf("num=%d kor=%f eng=%f c=%f \n",a[i].num,a[i].kor,a[i].eng,a[i].c);
    };

    for(i = 0; i < 3; i++){
        printf("num=%d kor=%f eng=%f c=%f \n",ap[i].num,ap[i].kor,ap[i].eng,ap[i].c);
    };

    for(i = 0; i < 3; i++){
        printf("num=%d kor=%f eng=%f c=%f \n",(ap+i)->num,ap[i].kor,ap[i].eng,ap[i].c);
    };

    return 0;
}