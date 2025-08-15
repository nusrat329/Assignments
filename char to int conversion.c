#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character: ");
    scanf("%c", &ch);

    num = (int)ch;

    printf("The character as an integer: %d\n", num);

    return 0;
}
