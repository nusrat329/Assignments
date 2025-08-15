#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    int ch1, ch2, pos = 0, line = 1;

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch1 = f1getc(f1)) != EOF && (ch2 = f1getc(f2)) != EOF) {
        pos++;
        if (ch1 == '\n') line++;
        if (ch1 != ch2) {
            printf("Mismatch at line %d, byte %d: '%c' vs '%c'\n", line, pos, ch1, ch2);
        }
    }

    if (ch1 != ch2) {
        printf("Files differ in length.\n");
    }

    fclo
