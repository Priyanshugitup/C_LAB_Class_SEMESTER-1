#include<stdio.h>
typedef struct{
    int rollno;
    int marks;
}student;  
void main(){
    student s1;
    s1.rollno=1000;
    s1.marks=97;
    student *p;
    p=&s1;
    printf("%d\n",(*p).rollno); // (*p).rollno can be written as p->rollno
    printf("%d",p->marks);
}