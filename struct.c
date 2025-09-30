#include <stdio.h>
#include <string.h>

struct Student{  // blueprint
    int sap;     // attribute
    char name[50];
    float marks;
};

int main() {
    struct Student student1;
    student1.sap = 100234;
    strcpy(student1.name, "Sam");
    student1.marks = 93;

    printf("SAP id : %d\n", student1.sap);
    printf("NAME : %s\n", student1.name);
    printf("MARKS : %.2f\n", student1.marks);

    return 0;
}