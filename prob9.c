#include <stdio.h>

int FIBO(int num);

int FIBO(int num) {
    if (num <= 1) {
        return num;
    } else {
        return FIBO(num - 1) + FIBO(num - 2);
    }
}

int main() {
    int num_terms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);

    printf("\nFibonacci sequence up to %d terms:\n", num_terms);

    for (i = 0; i < num_terms; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}