#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    float normal = 0;
    int trace = 0;
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            normal += matrix[i][j] * matrix[i][j];
            if (i == j)
                trace += matrix[i][j];
        }
    }

    normal = sqrt(normal);
    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2f\n", normal);

    return 0;
}
