#include <stdio.h>

void add(int *a, int *b, int *res){
    *res = *a + *b;
}
void subtract(int *a, int *b, int *res){
    *res = *a - *b;
}
void multiply(int *a, int *b, int *res){
    *res = (*a) * (*b);
}

int main(){
    int x,y,result;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    add(&x, &y, &result);
    printf("Addition: %d\n", result);

    subtract(&x, &y, &result);
    printf("Subtraction: %d\n", result);

    multiply(&x, &y, &result);
    printf("Multiplication: %d\n", result);

    return 0;
}