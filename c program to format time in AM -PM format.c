#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *timeinfo;
    char buffer[80];

    time(&now);
    timeinfo = localtime(&now);

    strftime(buffer, sizeof(buffer), "%I:%M:%S %p", timeinfo);
    printf("%s\n", buffer);

    return 0;
}
