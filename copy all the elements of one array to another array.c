#include <stdio.h>
int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];

    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Elements in the destination array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
