#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tempFile;
    char data[] = "This is a temporary file.";

    tempFile = tmpfile();
    if (tempFile == NULL) {
        printf("Unable to create temporary file.\n");
        return 1;
    }

    fwrite(data, sizeof(char), sizeof(data) - 1, tempFile);
    rewind(tempFile);

    char buffer[100];
    fread(buffer, sizeof(char), sizeof(data) - 1, tempFile);
    buffer[sizeof(data) - 1] = '\0';

    printf("Data from temporary file: %s\n", buffer);

    fclose(tempFile);
    return 0;
}
