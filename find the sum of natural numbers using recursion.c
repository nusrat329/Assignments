#include <stdio.h>
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        printf("Sum of first %d natural numbers is: %d\n", num, sum(num));
    }

    return 0;
}
