#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0, remainder;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        remainder = octal % 10;
        decimal += remainder * pow(8, i);
        octal /= 10;
        i++;
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
