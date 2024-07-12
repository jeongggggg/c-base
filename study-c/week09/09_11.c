#include <stdio.h>

// 구조체 크기가 3인 배열 a로 선언학, 초기값을 지정하는 프로그램 (초기값은 자유롭게 지정)

struct student{ 
    int num;
    float kor;
    float eng;
    float c;
};

int main(){
    
    struct student a[3];
    
    int i;
    for(i = 0; i < 3; i++){
        scanf("%d %f %f %f",&a[i].num, &a[i].kor, &a[i].eng, &a[i].c);
    };

    for(i = 0; i < 3; i++){
        printf("num=%d kor=%f eng=%f c=%f \n",a[i].num,a[i].kor,a[i].eng,a[i].c);
    };

    return 0;
}