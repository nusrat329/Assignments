#include <stdio.h>

int main() {
    int arr[5], *ptr1, *ptr2, temp;

    printf("Enter 5 elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (ptr1 = arr; ptr1 < arr + 4; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + 5; ptr2++) {
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
