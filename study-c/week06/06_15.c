#include <stdio.h>

int main(){
    
    int i = 10, *ip;
    double f = 20, *fp;
    char c = 'a', *cp;

    ip = &i;
    fp = &f;
    cp = &c;

    printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p \n",&i,ip,&f,fp,&c,cp);

    ip--;
    fp--;
    cp--;

    printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p \n",&i,ip,&f,fp,&c,cp);
}