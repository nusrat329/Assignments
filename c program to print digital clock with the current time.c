#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    while (1) {
        time_t now;
        struct tm *timeinfo;
        char buffer[80];

        time(&now);
        timeinfo = localtime(&now);

        strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo);

        system("clear");
        printf("Digital Clock\n");
        printf("==============\n");
        printf("    %s\n", buffer);

        sleep(1);
    }

    return 0;
}
