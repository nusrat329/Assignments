#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINE 1024

bool is_single_line_comment(const char *line) {
    while (*line == ' ' || *line == '\t') line++; // Skip leading whitespace
    return strncmp(line, "//", 2) == 0;
}

bool starts_multi_line_comment(const char *line) {
    while (*line == ' ' || *line == '\t') line++;
    return strncmp(line, "/*", 2) == 0;
}

bool ends_multi_line_comment(const char *line) {
    return strstr(line, "*/") != NULL;
}

int main() {
    FILE *src, *dest;
    char line[MAX_LINE];
    bool in_multiline_comment = false;

    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "a");

    if (!src || !dest) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(line, sizeof(line), src)) {
        if (in_multiline_comment) {
            if (ends_multi_line_comment(line)) {
                in_multiline_comment = false;
            }
            continue;
        }

        if (is_single_line_comment(line)) {
            continue;
        }

        if (starts_multi_line_comment(line)) {
            if (!ends_multi_line_comment(line)) {
                in_multiline_comment = true;
            }
            continue;
        }
        fputs(line, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Content appended successfully (excluding comments).\n");
    return 0;
}
