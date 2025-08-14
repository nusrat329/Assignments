#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d are:\n", N);

    for (i = 2; i <= N; i++) {
        isPrime = 1; // Assume the number is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
