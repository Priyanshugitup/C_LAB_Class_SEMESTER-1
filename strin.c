#include <stdio.h>
#include <string.h>

int main(){
   // char str[] = "Hello"; // string literal
   //  char str[] = {'h','e','l','l','o'};
    char str[] = {'h','e','l','l','o','\0'};
   // str[2] = 's';
   // printf("%s", str);
    printf("%d", strlen(str));

    return 0;
}