#include <stdio.h>
#include <string.h>

struct Student {
    int sap;
    char name[50];
    float marks;
};

int main() {
    int n,i;
    printf("Enter number of students: ");
    scanf("%d", n);
    struct Student student[n];

    for(i=0; i<3; i++){
    printf("Enter SAP ID: ");
    scanf("%d", &student[i].sap);

    printf("Enter Name: ");
    scanf(" %[^\n]", student[i].name);

    printf("Enter Marks: ");
    scanf("%f", &student[i].marks);
    }

    printf("\nStudent Details\n");
    for(i = 0; i<n; i++){
    printf("SAP ID : %d\n", student[i].sap);
    printf("Name   : %s\n", student[i].name);
    printf("Marks  : %.2f\n", student[i].marks);
    }
    return 0;
}