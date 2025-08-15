#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

int main() {
    int n;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
