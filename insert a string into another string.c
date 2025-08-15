#include <stdio.h>
#include <string.h>

void insertString(char str1[], char str2[], int position) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (position > len1) {
        position = len1;
    }

    for (int i = len1; i >= position; i--) {
        str1[i + len2] = str1[i];
    }

    for (int i = 0; i < len2; i++) {
        str1[position + i] = str2[i];
    }

    str1[len1 + len2] = '\0';
}

int main() {
    char str1[1000], str2[500];
    int position;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    insertString(str1, str2, position);

    printf("Resulting string: %s\n", str1);

    return 0;
}
