#include <stdio.h>
int isArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    double sum = 0.0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    return ((int)sum == num);
}

int main() {
    int lower, upper;

    printf("Enter lower interval: ");
    scanf("%d", &lower);
    printf("Enter upper interval: ");
    scanf("%d", &upper);

    if (lower > upper || lower < 0) {
        printf("Invalid interval.\n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
