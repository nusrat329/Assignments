#include <stdio.h>

int main() {
    int decimal;
    char hexadecimal[50];
    int i = 0, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hexadecimal[i] = remainder + '0';
        else
            hexadecimal[i] = remainder - 10 + 'A';
        decimal /= 16;
        i++;
    }

    printf("The hexadecimal equivalent is: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");

    return 0;
}
