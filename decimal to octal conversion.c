#include <stdio.h>

int main() {
    int decimal, remainder;
    int octal = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
        i *= 10;
    }

    printf("The octal equivalent is: %d\n", octal);

    return 0;
}
