#include <stdio.h>

int main() {
    int arr[5], *ptr, max;

    printf("Enter 5 elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    max = *ptr;

    for (int i = 1; i < 5; i++) {
        ptr++;
        if (*ptr > max) {
            max = *ptr;
        }
    }

    printf("Largest element is %d\n", max);

    return 0;
}
