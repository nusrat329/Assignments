#include <stdio.h>
#include <stdlib.h>

int main() {
    double number;
    char str[100];

    printf("Enter a double number: ");
    scanf("%lf", &number);

    sprintf(str, "%lf", number);

    printf("The double as a string: %s\n", str);

    return 0;
}
