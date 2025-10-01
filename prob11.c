#include <stdio.h>
#include <string.h>

void REVERSE(char *str);

void REVERSE(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char input_string[100];
    printf("Enter a string to reverse:\n");

    if (fgets(input_string, sizeof(input_string), stdin) != NULL) {
        input_string[strcspn(input_string, "\n")] = 0;

        printf("\nOriginal string: %s\n", input_string);

        REVERSE(input_string);

        printf("Reversed string: %s\n", input_string);
    } else {
        printf("Error reading input.\n");
        return 1;
    }

    return 0;
}