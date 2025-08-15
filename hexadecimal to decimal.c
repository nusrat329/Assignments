#include <stdio.h>
#include <math.h>

int main() {
    char hex[20];
    int decimal = 0, i = 0, length, value;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex);
    for (int j = 0; j < length; j++) {
        if (hex[j] >= '0' && hex[j] <= '9') {
            value = hex[j] - '0';
        } else if (hex[j] >= 'A' && hex[j] <= 'F') {
            value = hex[j] - 'A' + 10;
        } else if (hex[j] >= 'a' && hex[j] <= 'f') {
            value = hex[j] - 'a' + 10;
        }
        decimal += value * pow(16, length - 1 - j);
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
