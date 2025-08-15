#include <stdio.h>
int main() {
    int rows, cols;
    int equal = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix2[i][j]);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal)
            break;
    }

    if (equal)
        printf("Both matrices are equal.\n");
    else
        printf("Matrices are NOT equal.\n");

    return 0;
}
