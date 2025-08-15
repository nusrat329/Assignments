#include <stdio.h>
#include <stdlib.h>

int* returnDynamicPointer() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 10;
    }
    return ptr;
}

int main() {
    int *ptr = returnDynamicPointer();
    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
        free(ptr);
    }
    return 0;
}
