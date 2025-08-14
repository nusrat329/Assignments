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
    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
