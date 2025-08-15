#include <stdio.h>
#include <string.h>
void compareStringsLexicographically(char str1[], char str2[]) {
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are lexicographically equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically larger than the second.\n");
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    compareStringsLexicographically(str1, str2);

    return 0;
}
