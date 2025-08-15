#include <stdio.h>
#include <string.h>

void splitString(char str[], char delimiter[]) {
    char *token = strtok(str, delimiter);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }
}

int main() {
    char str[1000], delimiter[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the delimiter: ");
    fgets(delimiter, sizeof(delimiter), stdin);
    delimiter[strcspn(delimiter, "\n")] = '\0';

    splitString(str, delimiter);

    return 0;
}
