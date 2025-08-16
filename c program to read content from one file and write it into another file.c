#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINE 1024

void remove_comments(const char *src_filename, const char *dest_filename) {
    FILE *src = fopen(src_filename, "r");
    FILE *dest = fopen(dest_filename, "w");

    if (!src || !dest) {
        perror("Error opening file");
        exit(1);
    }

    char ch, next_ch;
    bool in_single_line_comment = false;
    bool in_multi_line_comment = false;

    while ((ch = fgetc(src)) != EOF) {
        if (in_single_line_comment) {
            if (ch == '\n') {
                in_single_line_comment = false;
                fputc(ch, dest);
            }
            continue;
        }

        if (in_multi_line_comment) {
            if (ch == '*' && (next_ch = fgetc(src)) == '/') {
                in_multi_line_comment = false;
            } else if (ch == '*' && next_ch != '/') {
            }
            continue;
        }

        if (ch == '/') {
            next_ch = fgetc(src);
            if (next_ch == '/') {
                in_single_line_comment = true;
                continue;
            } else if (next_ch == '*') {
                in_multi_line_comment = true;
                continue;
            } else {
                fputc(ch, dest);
                ungetc(next_ch, src);
            }
        } else {
            fputc(ch, dest);
        }
    }

    fclose(src);
    fclose(dest);
}

int main() {
    remove_comments("input.txt", "output.txt");
    printf("Comments removed and content written to output.txt\n");
    return 0;
}
