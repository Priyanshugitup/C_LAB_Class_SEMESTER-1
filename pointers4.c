#include <stdio.h>
int add(int,int);

int main(){
    int sum;
   // int *ptr;
   // ptr=&sum;
    int (*fp)(int,int);
    fp=&add;
    sum=fp(10,30);
    printf("sum = %d", sum);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}