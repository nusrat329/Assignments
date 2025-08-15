#include <stdio.h>
int removeAllOccurrences(int arr[], int n, int elem) {
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != elem) {
            arr[newSize++] = arr[i];
        }
    }

    return newSize;
}

int main() {
    int n, elem;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to remove: ");
    scanf("%d", &elem);

    int newSize = removeAllOccurrences(arr, n, elem);

    printf("Array after removing all occurrences of %d:\n", elem);
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
