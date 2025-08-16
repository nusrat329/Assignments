#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    struct tm *gmt = gmtime(&now);
    char buffer_local[80], buffer_gmt[80];

    strftime(buffer_local, sizeof(buffer_local), "%Y-%m-%d %H:%M:%S", local);
    strftime(buffer_gmt, sizeof(buffer_gmt), "%Y-%m-%d %H:%M:%S", gmt);

    printf("Local time: %s\n", buffer_local);
    printf("GMT time:   %s\n", buffer_gmt);

    return 0;
}
