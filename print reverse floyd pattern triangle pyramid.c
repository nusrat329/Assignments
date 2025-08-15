#include <stdio.h>
int main() {
    int rows, i, j, space, num = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int total = rows * (rows + 1) / 2;
    num = total;

    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf("   ");
        }
        for (j = 1; j <= i; j++) {
            printf("%3d", num--);
        }

        printf("\n");
    }

    return 0;
}
