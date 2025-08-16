#include <stdio.h>
#include <time.h>

int main() {
    struct tm date = {0};
    char buffer[100];
    int year = 2025;

    date.tm_year = year - 1900;
    date.tm_mday = 1;
    date.tm_mon = 0;

    while (date.tm_year == year - 1900) {
        mktime(&date);

        strftime(buffer, sizeof(buffer), "%Y-%m-%d", &date);
        printf("ISO Format:        %s\n", buffer);

        strftime(buffer, sizeof(buffer), "%d/%m/%Y", &date);
        printf("DD/MM/YYYY Format: %s\n", buffer);

        strftime(buffer, sizeof(buffer), "%B %d, %Y", &date);
        printf("Long Format:       %s\n", buffer);

        strftime(buffer, sizeof(buffer), "%A, %B %d, %Y", &date);
        printf("Full Format:       %s\n\n", buffer);

        date.tm_mday++;
    }

    return 0;
}
