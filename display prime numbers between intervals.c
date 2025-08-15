#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the starting value: ");
    scanf("%d", &start);

    printf("Enter the ending value: ");
    scanf("%d", &end);

    if (start < 2)
        start = 2;

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
