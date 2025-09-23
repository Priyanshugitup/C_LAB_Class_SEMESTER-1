#include <stdio.h>

int main(){
    int x[]={10,20,30,40,50};
    int *p;
    p=x; // in array no need to write &x

    printf("Value of x is = %d\n", x[1]);
    printf("Value of x = %d\n", *(p+1)); // p has the address of 10, p+1 doesn't mean (p+1)byte it is taking to next value of array.
    printf("Value of x = %d\n", *(p+2)); 
    
    return 0;
}