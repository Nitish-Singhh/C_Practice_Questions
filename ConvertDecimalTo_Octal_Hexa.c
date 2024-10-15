#include <stdio.h>

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Octal equivalent: %o\n", decimal);
    printf("Hexadecimal equivalent: %X\n", decimal);

    return 0;
}
