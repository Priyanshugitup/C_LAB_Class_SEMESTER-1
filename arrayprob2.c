#include <stdio.h>

int main(){
    int arr[10][10];
    int r,c;
    printf("Enter values:\n");
    for(r=0; r<=2; r++){
        for(c=0; c<=3; c++){
            scanf("%d", &arr[r][c]);
        }
    }
    printf("The values you entered are:\n");
    for(r=0; r<=2; r++){
        for(c=0; c<=3; c++){
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}