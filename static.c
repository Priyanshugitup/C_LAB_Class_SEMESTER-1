#include <stdio.h>

void count(){
    static int x = 0;// first try without writing static.
    x++;
    printf("count = %d\n",x);
}

int main(){
    count();
    count();
    count();
    return 0;
}