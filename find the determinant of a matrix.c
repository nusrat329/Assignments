#include <stdio.h>
int determinant2x2(int matrix[2][2]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}
int determinant3x3(int matrix[3][3]) {
    int a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    int d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    int g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];

    return a * (e * i - f * h)
         - b * (d * i - f * g)
         + c * (d * h - e * g);
}

int main() {
    int n;
    printf("Enter size of square matrix (2 or 3): ");
    scanf("%d", &n);

    if (n != 2 && n != 3) {
        printf("Only 2x2 or 3x3 matrices are supported.\n");
        return 1;
    }

    int matrix[3][3];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int det = 0;
    if (n == 2)
        det = determinant2x2(matrix);
    else
        det = determinant3x3(matrix);

    printf("Determinant of the matrix is: %d\n", det);
    return 0;
}
