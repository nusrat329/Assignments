#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[256], pattern[100];

    printf("Enter pattern to search: ");
    scanf(" %[^\n]", pattern);

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern)) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
