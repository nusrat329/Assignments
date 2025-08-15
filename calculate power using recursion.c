#include <stdio.h>
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;  // base case: any number^0 = 1
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent (integer): ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.4lf\n", base, exponent, result);

    return 0;
}
