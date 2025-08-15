#include <stdio.h>
#include <ctype.h>
void printFirstLetter(char str[]) {
    int i = 0;
    int isWordStart = 1 ;

    while (str[i] != '\0') {
        if (isalpha(str[i]) && isWordStart) {
            printf("%c ", str[i]);
            isWordStart = 0;
        }
        if (str[i] == ' ') {
            isWordStart = 1;
        }
        i++;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("First letter of each word: ");
    printFirstLetter(str);
    printf("\n");

    return 0;
}
