#include <stdio.h>
#define N 3

// 3명의 학생에 대하여 실수(float)형태의 점수를 각각 입력 받아 출력하는 프로그램

void gerVal(float *, int);

int main(){
    
    int i;
    float score[N] = {0};

    gerVal(score, N);

    for(i=0; i<N; i++){
        printf("score[%d] : %f \n", i, score[i]);
    }
}

void gerVal(float *a, int b){

    int i;

     for(i=0; i<b; i++){
        printf("a[%d] : \n", i);
        scanf("%f",(a+i)); // &a[i]
    }
}