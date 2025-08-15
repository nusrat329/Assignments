#include <stdio.h>
#include <stdlib.h>

int main() {
    float number;
    char str[50];

    printf("Enter a float number: ");
    scanf("%f", &number);

    sprintf(str, "%f", number);

    printf("The float as a string: %s\n", str);

    return 0;
}
