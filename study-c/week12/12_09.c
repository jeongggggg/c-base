#include <stdio.h>
#include <string.h>

int main(){

    char s1[20];
    char s2[20];
    int i;

    printf("s1과 s2를 입력하세요 \n");

    gets(s1); //kim
    gets(s2); //lee

    printf("s1=%s s2 = %s \n",s1,s2); //kim, lee
    printf("s1의 길이 : %d, s2의 길이 : %d \n", strlen(s1),strlen(s2));

    i = strcmp(s1, s2);
    printf("after cpm : %d \n",i); // s1 < s2 ? 1, s1 < s2 ? 2, s1 == s2 ? 0, ans = -1
    
    strcat(s1, s2);
    printf("s1=%s s2 = %s \n",s1,s2); //kimlee, lee

    strcpy(s1, s2);
    printf("s1=%s s2 = %s \n",s1,s2); //lee, lee

     return 0;
}