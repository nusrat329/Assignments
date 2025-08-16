#include <stdio.h>
int main() {
    char name[100];
    int i = 0;

    fgets(name, sizeof(name), stdin);

    while (name[i]) {
        if (i == 0 && name[i] != ' ')
            printf("%c.", toupper(name[i]));
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
        i++;
    }
    printf("\n");

    return 0;
}
