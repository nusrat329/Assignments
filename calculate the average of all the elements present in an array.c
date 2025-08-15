#include <stdio.h>
int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Average of the array elements is: %.2f\n", average);

    return 0;
}
