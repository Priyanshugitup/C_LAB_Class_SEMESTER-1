#include<stdio.h>
enum Days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
};
void main()
{
    enum Days now;
   // printf("%d\n",Days.Sunday);
    now=Wednesday;
    printf("%d\n",now);
}