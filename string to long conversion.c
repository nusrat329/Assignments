#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    long num;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    num = strtol(str, NULL, 10);

    printf("The string as a long: %ld\n", num);

    return 0;
}
