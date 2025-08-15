#include <stdio.h>
#include <string.h>
void compareUsingStrcmp(char str1[], char str2[]) {
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are identical.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically larger than the second.\n");
    }
}
void compareManually(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            if (str1[i] < str2[i]) {
                printf("The first string is lexicographically smaller than the second.\n");
            } else {
                printf("The first string is lexicographically larger than the second.\n");
            }
            return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are identical.\n");
    } else if (str1[i] == '\0') {
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
    printf("\nUsing strcmp():\n");
    compareUsingStrcmp(str1, str2);
    printf("\nUsing manual comparison:\n");
    compareManually(str1, str2);

    return 0;
}
