#include <stdio.h>
#include <string.h>
void addBinaryStrings(char *str1, char *str2, char *result) {
    int i, j, carry = 0, sum, k = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    while (len1 < len2) {
        str1[len1++] = '0';
    }
    while (len2 < len1) {
        str2[len2++] = '0';
    }
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int bit1 = (i >= 0) ? str1[i] - '0' : 0;
        int bit2 = (j >= 0) ? str2[j] - '0' : 0;

        sum = bit1 + bit2 + carry;
        carry = sum / 2;
        result[k++] = (sum % 2) + '0';
    }
    result[k] = '\0';
    for (i = 0, j = k - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}

int main() {
    char str1[100], str2[100], result[101];
    printf("Enter the first binary string: ");
    scanf("%s", str1);
    printf("Enter the second binary string: ");
    scanf("%s", str2);
    addBinaryStrings(str1, str2, result);
    printf("The sum of the binary strings is: %s\n", result);

    return 0;
}
