#include <stdio.h>

int main(){
    int n1,n2,sum=n1+n2,sub=n1-n2,mult=n1*n2,div=n1/n2;
    int choice;//if we want ti input float , char then just replace int with it..in terminal we have to write accordint to datatype we declared
    printf("Enter first num:");
    scanf("%d", &n1);
    printf("Enter second num:");
    scanf("%d", &n2);
    printf("MENU:\n 1:Addition\n 2:Subtraction\n 3:Multiplication\n 4:Division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: sum=n1+n2;
        printf("Addition of two numbers %d and %d is %d",n1,n2,sum);
        break;
    case 2: sub=n1-n2;
    printf("Difference of two numbers %d and %d is %d",n1,n2,sub);
        break;
    case 3: mult=n1*n2;
    printf("Multiplication of two numbers %d and %d is %d",n1,n2,mult);
        break;
    case 4: div=n1/n2;
    printf("Division of two numbers %d and %d is %d",n1,n2,div);
        break;
    default: 
        printf("Invalid choice");
        break;
    }
    return 0;
}