#include <stdio.h>
#define SIZE 3

// 구조체 내용을 구조체 배열로 선언한 내용을 파일에 넣으려 함
struct student{
    
    int number; // 학번
    char name[20]; // 이름
    double gpa; // 평점
};

int main(void){

    // 구조체 배열 선언
    struct student table[SIZE] = {
        {1, "kim", 3.99}, // 구조체 배열에 대한 초기값
        {2, "Min", 2.68}, // 구조체 배열에 대한 초기값
        {3, "Lee", 4.01}, // 구조체 배열에 대한 초기값
    };

    struct student s;
    FILE *fp = NULL;
    int i;
    if((fp = fopen("student.dat","wb")) == NULL){
        fprintf("stderr","error \n");
        return -1;
    }

    // fwrite, fread 를 이용하여 구조체 데이터를 파일에 쓰고, 구조체 데이터를 파일에서 하나씩 가져오는 과정
    fwrite(table,sizeof(struct student),SIZE,fp); // 배열 내용 파일 저장
    fclose(fp);

    if((fp = fopen("student.dat","rb")) == NULL){
        fprintf(stderr,"error \n");
        return -1;
    }

    for(i=0;i<SIZE;i++){
        fread(&s,sizeof(struct student),1,fp); // fp에 있는 내용을 하나씩 가져다 구조체 변수에 집어넣고 구조체 변수에 있는 내용을 멤버별로 출력
        printf("학번 = %d, 이름 = %s, 평점 = %f \n",s.number,s.name,s.gpa);
    }

    fclose(fp);
    return 0;
}