#include <stdio.h>
int main() {
    int n1, n2
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements are:\n");

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }s
        }
    }
    printf("\n");

    return 0;
}
