#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Input is not an alphabet.\n");
    }

    return 0;
}
