#include <stdio.h>
#include <stdlib.h>

int main() {
    if (chmod("example.txt", 0444) == 0) {
        printf("File permission changed to read-only.\n");
    } else {
        perror("chmod");
    }
    return 0;
}
