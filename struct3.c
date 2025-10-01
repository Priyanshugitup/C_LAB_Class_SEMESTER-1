#include <stdio.h>

struct Student {
    char name[50];
    float marks[5]; 
    float total;
    float percentage;
};

int main() {
    int n, i, j;
    char subjects[5][20] = {"Maths", "Physics", "Chemistry", "English", "Computer"};

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Enter details of Student %d ---\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        students[i].total = 0;

        printf("Enter marks of 5 subjects (each out of 100):\n");
        for (j = 0; j < 5; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }

        students[i].percentage = students[i].total / 5.0;
    }

    printf("\n===== Student Results =====\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name        : %s\n", students[i].name);

        for (j = 0; j < 5; j++) {
            printf("%s Marks : %.2f\n", subjects[j], students[i].marks[j]);
        }

        printf("Total Marks : %.2f / 500\n", students[i].total);
        printf("Percentage  : %.2f%%\n", students[i].percentage);
    }

    return 0;
}

