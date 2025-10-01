#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    else {
        return GCD(num2, num1 % num2);
    }
}
int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int n1 = (num1 > 0) ? num1 : -num1;
    int n2 = (num2 > 0) ? num2 : -num2;

    int result = GCD(n1, n2);
    printf("\nThe greatest common divisor (GCD) of %d and %d is: %d\n", num1, num2, result);
    

    return 0;
}