#include <stdio.h>
int main() {
    int n, i, j;
    int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        primary_diagonal_sum += matrix[i][i];
        secondary_diagonal_sum += matrix[i][n-i-1];
    }
    printf("Sum of primary diagonal: %d\n", primary_diagonal_sum);
    printf("Sum of secondary diagonal: %d\n", secondary_diagonal_sum);
    printf("Total sum of diagonals: %d\n", primary_diagonal_sum + secondary_diagonal_sum);

    return 0;
}
