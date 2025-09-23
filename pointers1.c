#include <stdio.h>

int main(){
    int x=10;
    int *p;
    p=&x;

    printf("Value of x is = %d\n", x);
    printf("Address of x = %d\n", &x); // first try to run till this
    printf("Address of x = %d\n", p); // then write this and run
    printf("Value of x = %d\n", *p); // now display value stored at that address
    printf("%d\n", *(&x)); // question asked to a student in class
    
    return 0;
}