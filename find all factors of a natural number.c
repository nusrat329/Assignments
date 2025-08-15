#include <stdio.h>
int main() {
int num, i;
printf("Enter a natural number: ");
scanf("%d", &num);

if (num <= 0) {
 printf("Please enter a natural number greater than 0.\n");
 return 1;
    }
printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
    if (num % i == 0) {
    printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
