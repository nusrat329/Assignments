#include <stdio.h>
#include <string.h>
int getUnicodeCodePointAt(char str[], int index) {
    int i = 0;
    int byteCount = 0;

    while (str[i] != '\0') {
        unsigned char byte = str[i];
        if (byte <= 0x7F) {
            byteCount = 1;
        } else if (byte >= 0xC0 && byte <= 0xDF) {
            byteCount = 2;
        } else if (byte >= 0xE0 && byte <= 0xEF) {
            byteCount = 3;
        } else if (byte >= 0xF0 && byte <= 0xF7) {
            byteCount = 4;
        } else {
            return -1;
        }

        if (index == i) {
            int codePoint = 0;
            for (int j = 0; j < byteCount; j++) {
                codePoint |= (str[i + j] & 0xFF) << (8 * (byteCount - 1 - j));
            }
            return codePoint;
        }

        i += byteCount;
    }
    return -1;
}

int main() {
    char str[1000];
    int index;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the index: ");
    scanf("%d", &index);
    int codePoint = getUnicodeCodePointAt(str, index);

    if (codePoint != -1) {
        printf("The Unicode code point at index %d is: U+%X\n", index, codePoint);
    } else {
        printf("Invalid index or invalid character at the index.\n");
    }

    return 0;
}
