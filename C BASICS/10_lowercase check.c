#include <stdio.h>

int main() {
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if it is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    }
    else {
        printf("The character '%c' is NOT lowercase.\n", ch);
    }

    return 0;
}
