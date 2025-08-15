#include <stdio.h>
int main() {
    int m, n, i, temp;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        temp = matrix[i][0];
        matrix[i][0] = matrix[i][n-1];
        matrix[i][n-1] = temp;
    }

    printf("\nModified matrix after swapping first and last elements in each row:\n");
    for(i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
