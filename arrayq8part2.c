#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int mainSum = 0, secSum = 0;

    printf("\nMain Diagonal Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        mainSum += matrix[i][i];
    }

    printf("\nSecondary Diagonal Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
        secSum += matrix[i][n - 1 - i];
    }

    printf("\nSum of Main Diagonal Elements = %d", mainSum);
    printf("\nSum of Secondary Diagonal Elements = %d\n", secSum);

    return 0;
}
