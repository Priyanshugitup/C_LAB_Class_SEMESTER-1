#include <stdio.h>

int main(){
    int arr[6][6];
    int r,c;
    printf("Enter 6 elements for the first 2x3 matrix:\n");
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            scanf("%d", &arr[r][c]);
        }
    }
    printf("The first matrix is:\n");
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
    
    int ARR[6][6];
    printf("\nEnter 6 elements for the second 2x3 matrix:\n");
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            scanf("%d", &ARR[r][c]);
        }
    }
    printf("\nsecond matrices is:\n");
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            printf("%d\t", ARR[r][c]);
            
        }
        printf("\n");
    }
    int product[6][6];
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            product [r][c] = arr[r][c] * ARR[r][c];
        }
    }
    printf("\nThe product of two matrices is:\n");
    for(r=0; r<=1; r++){
        for(c=0; c<=2; c++){
            printf("%d\t", product[r][c]);
        }
        printf("\n");
    }
    return 0;
}