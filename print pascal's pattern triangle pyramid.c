#include <stdio.h>
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }

        printf("\n");
    }

    return 0;
}
