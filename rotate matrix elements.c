#include <stdio.h>
int main() {
    int n;

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], rotated[n][n];
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }
    printf("Matrix after 90 degree rotation clockwise:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", rotated[i][j]);
        printf("\n");
    }

    return 0;
}
