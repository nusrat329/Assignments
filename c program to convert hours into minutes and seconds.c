#include <stdio.h>

int main() {
    int hours;
    int minutes, seconds;

    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("%d hours = %d minutes = %d seconds\n", hours, minutes, seconds);

    return 0;
}
