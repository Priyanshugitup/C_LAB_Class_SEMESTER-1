#include <stdio.h>

void add(int,int);
int x = 10; // global variables
int y = 20;

int main(){
    int x = 300; // local variables
    int y = 5;
   // add(x,y);// add(3,5)
    for(x=0; x<3; x++){
        printf("First = %d\t", x++);
    }
    printf("\nsecond = %d",x); 
 }
void add(int x,int y)
{
    int sum;
    sum = x+y;
    printf("sum = %d\n", sum);
    printf("x=%d, y=%d\n",x,y);
}
    
   
