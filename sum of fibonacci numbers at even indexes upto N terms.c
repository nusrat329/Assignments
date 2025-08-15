#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, fib;
    int sum = 0;

    printf("Enter number of Fibonacci terms (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            fib = 0;
        } else if (i == 1) {
            fib = 1;
        } else {
            fib = a + b;
            a = b;
            b = fib;
        }

        printf("%d ", fib);

        if (i % 2 == 0) {
            sum += fib;
        }
    }

    printf("\nSum of Fibonacci numbers at even indexes: %d\n", sum);

    return 0;
}
