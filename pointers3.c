// Declare different types of pointers (int, float, char)
//  and initialize them with the addresses of variables. 
//  Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Address stored in pInt   : %p\n", (void*)pInt);
    printf("Address stored in pFloat : %p\n", (void*)pFloat);
    printf("Address stored in pChar  : %p\n", (void*)pChar);

    
    printf("Value of a using pInt    : %d\n", *pInt);
    printf("Value of b using pFloat  : %.2f\n", *pFloat);
    printf("Value of c using pChar   : %c\n", *pChar);

   
    printf("Original value of a      : %d\n", a);
    printf("Original value of b      : %.2f\n", b);
    printf("Original value of c      : %c\n", c);

    return 0;
}