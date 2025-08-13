#include<stdio.h>

int main(){
    int b=1;
    int a=2;
    int *q=&a;
    int *p=&b;

    printf("%d \n",p);
    printf("%d",q);
    return 0;
}