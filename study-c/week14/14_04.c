#include <stdio.h>

// 순차정렬

int main(){

    for(i = 0; i < N-1; i++){

        for(j = i; j < N; j++){
            if(tmp[i] < tmp[j]){ // 앞쪽 원소가 더 크면
                change(tmp[i], tmp[j]); // 교환
            }
        }

        swap(&tmp[i],&tmp[min])
    }

    return 0;
}