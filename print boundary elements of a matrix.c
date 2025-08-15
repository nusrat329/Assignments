#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Boundary elements are:\n");
    for (int j = 0; j < cols; j++)
        printf("%d ", matrix[0][j]);
    for (int i = 1; i < rows - 1; i++)
        printf("%d ", matrix[i][cols - 1]);
    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--)
            printf("%d ", matrix[rows - 1][j]);
    }
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--)
            printf("%d ", matrix[i][0]);
    }

    printf("\n");

    return 0;
}
