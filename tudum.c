#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an Alphabet.\n", ch);
    } else {
        printf("'%c' is NOT an Alphabet.\n", ch);
    }

    return 0;
}
