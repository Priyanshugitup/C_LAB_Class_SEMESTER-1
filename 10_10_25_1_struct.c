#include<stdio.h>
struct student{
    int rollno;
    int marks;
};  
void main(){

    struct student s1;
    s1.rollno=1000;
    s1.marks=97;
    struct student *p;
    p=&s1;
    printf("%d\n",(*p).rollno);
    printf("%d",p->marks);
}