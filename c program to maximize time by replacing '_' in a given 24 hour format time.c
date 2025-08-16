#include <stdio.h>
#include <string.h>

void maximize_time(char *time) {
    if (time[0] == '_') {
        if (time[1] != '_' && time[1] >= '4')
            time[0] = '1';
        else
            time[0] = '2';
    }
    if (time[1] == '_') {
        if (time[0] == '2')
            time[1] = '3';
        else
            time[1] = '9';
    }
    if (time[3] == '_')
        time[3] = '5';
    if (time[4] == '_')
        time[4] = '9';
}

int main() {
    char time[6];
    scanf("%5s", time);
    maximize_time(time);
    printf("%s\n", time);
    return 0;
}
