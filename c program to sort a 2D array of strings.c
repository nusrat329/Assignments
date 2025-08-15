#include <stdio.h>
#include <string.h>
int main() {
    char arr[5][100], temp[100];

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
