#include <stdio.h>

int main(){
    char str[2]; // logically its not correct 
    printf("Enter your name:\n");
    // scanf("%[^\n]s",str);
    fgets(str,20,stdin); // it will print till we press enter or a new line
    printf("My name is %s", str); // for string space marks end of string
    return 0;
}