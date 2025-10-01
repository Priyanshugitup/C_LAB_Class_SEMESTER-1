#include <stdio.h>

int ISPRIME(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end, i;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}