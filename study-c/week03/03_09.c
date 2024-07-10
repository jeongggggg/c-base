#include <stdio.h>

/*
    <조건>
    - do ~ while 문을 사용하여 n명의 성적(score)을 입력받고, 90점 이상의 성적을 가진 학생의 수를 출력
    - score는 0 ~ 100 사이의 수이며, 이와의 수를 입력한 경우 반복문 탈출
    - 변수 : 정수형 변수 n, i, j, score
*/
int main(){

    int i = 1, n, score, j = 0;

    printf("성적을 입력할 학생 수 (N) : ");
    scanf("%d", &n);

    do{
        printf("%d번째 학생의 점수 (0~100) : ", i);
        scanf("%d", &score);

        if(score > 100 || score < 0){
            break;
        }

        i++;
        
        if(score >= 90){
            j++;
        }
    }while(i <= n);

    printf("%d명 중 90점 이상의 점수를 획득한 학생의 수 : %d \n", n, j);

    return 0;
}