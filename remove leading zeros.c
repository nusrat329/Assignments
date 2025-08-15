#include <stdio.h>
#include <string.h>
void removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0' && str[i] != '\0') {
        i++;
    }
    int j = 0;
    while (str[i] != '\0') {
        str[j++] = str[i++];
    }
    str[j] = '\0';
    if (j == 0) {
        str[0] = '0';
        str[1] = '\0';
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removeLeadingZeros(str);
    printf("String after removing leading zeros: '%s'\n", str);

    return 0;
}
