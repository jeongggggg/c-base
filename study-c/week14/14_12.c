#include <stdio.h>

// struct 랑 void 위 아래 순서가 바꼈더니 인식을 못했었음
struct a{
    int num;
    double total;
};

void test(struct a, struct a);

int main(){

    struct a t1, t2;

    t1.num = 1;
    t2.num = 2;

    test(t1,t2);

    return 0;
}

void test(struct a aa, struct a bb){
    if(aa.num == bb.num){
        printf("same");
    }

    else{
        printf("different");
    }
}