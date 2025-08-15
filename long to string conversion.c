#include <stdio.h>
#include <stdlib.h>

int main() {
    long num;
    char str[100];

    printf("Enter a long number: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);

    printf("The long as a string: %s\n", str);

    return 0;
}
