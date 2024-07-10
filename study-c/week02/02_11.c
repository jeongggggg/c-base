#include <stdio.h>

/*
    <조건>
    - 정수 n1, n2, n3을 입력받고 가장 큰 값 출력하기
    -  n1 ~ n3는 중복된 수가 없음을 가정함
    - if ~ else 사용하기
    - 변수 : n1, n2, n3, min, max
*/
int main(){

    int n1, n2, n3;
    int max;

    printf("서로 다른 n1 ~ n3 을 입력하세요. \n");
    scanf("%d %d %d",&n1, &n2, &n3);

    if(n1 > n2){

        max = n1;

        if(n3 > max){
            max = n3;
        }
        else{
            max= max;
        }
    }
    else{
        max = n2;

        if(n3 > max){
            max = n3;
        }

        else{
            max= max;
        }
    }

    printf("max = %d \n", max);

    return 0;
}