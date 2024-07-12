#include <stdio.h>

// 과일의 판매수량을 누적하여 관리하는 프로그램. 아래와 같은 결과가 나오도록 프로그래밍

/*
   어떤 과일을 구입하시겠습니까? 0
   (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박)

   과일의 판매수량
   (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박)

   fruit[0]=1
   fruit[1]=0
   fruit[2]=0
   fruit[3]=0
   fruit[4]=0

   어떤 과일을 구입하시겠습니까? 1
   (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박)

   과일의 판매수량
   (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박)

   fruit[0]=1
   fruit[1]=1
   fruit[2]=0
   fruit[3]=0
   fruit[4]=0

   어떤 과일을 구입하시겠습니까? 2
   (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박)

*/

void count(int);

int main(){

    int n;

    while(1){
        printf("어떤 과일을 구입하시겠습니까? (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박) \n");
        scanf("%d", &n);

        if(n > 4 || n < 0){
            break;
        }

        count(n);
    }

    count(n);

    return 0;
}

void count(int n){

    static int fruit[5] = {0}; // 인덱스 순서대로 사과, 배, 딸기, 복숭아, 수박
    int i;

    fruit[n] += 1;

    printf("\n 과일의 판매수량 (0:사과, 1:배, 2:딸기, 3:복숭아, 4:수박) \n");

    for(i = 0; i < 5; i++){
        printf("fruit[%d] = %d \n", i, fruit[i]);
    }

}