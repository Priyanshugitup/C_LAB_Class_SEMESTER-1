#include <stdio.h>

int main(){
    int c;
    int r;
    for(r=0; r<=3; r++){
        for(c=0; c<=r; c++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}