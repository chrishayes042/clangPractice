#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    // %d will display the int value of the char
    printf("ASCII value of %c = %d ", c, c);

    return 0;
}