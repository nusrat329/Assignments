#include <stdio.h>
#include <stdbool.h>

const char* boolToString(bool value) {
    return value ? "True" : "False";
}

int main() {
    bool value;

    printf("Enter 1 for True or 0 for False: ");
    scanf("%d", &value);

    printf("The boolean value as string: %s\n", boolToString(value));

    return 0;
}
