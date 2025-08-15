#include <stdio.h>
 isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Checking if %d can be expressed as the sum of two prime numbers...\n", n);

    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    if (!found)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

    return 0;
}
