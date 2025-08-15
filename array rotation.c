#include <stdio.h>
void rotateLeft(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    int n, d;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d)
    d = d % n;

    rotateLeft(arr, n, d);

    printf("Array after left rotation by %d positions:\n", d);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
