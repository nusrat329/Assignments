#include <stdio.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of interest (per annum): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
