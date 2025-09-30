#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter dimensions for Matrix A (m x n)\n");
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter dimensions for Matrix B (p x q)\n");
    printf("Enter number of rows (p): ");
    scanf("%d", &p);
    printf("Enter number of columns (q): ");
    scanf("%d", &q);
    
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int matrix_A[m][n];
    int matrix_B[p][q];
    int result_matrix[m][q];

    printf("\nEnter elements for Matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result_matrix[i][j] = 0;
            for (k = 0; k < n; k++) {
                result_matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    printf("\nInput Matrix A\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("\nInput Matrix B\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", matrix_B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A x B)\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}