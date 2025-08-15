#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

void addDistances(struct Distance dist[], int n) {
    int totalFeet = 0, totalInch = 0;

    for (int i = 0; i < n; i++) {
        totalFeet += dist[i].feet;
        totalInch += dist[i].inch;
    }

    totalFeet += totalInch / 12;
    totalInch = totalInch % 12;

    printf("Total distance: %d feet and %d inches\n", totalFeet, totalInch);
}

int main() {
    int n;

    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance dist[n];

    for (int i = 0; i < n; i++) {
        printf("Enter distance %d (feet inch): ", i + 1);
        scanf("%d %d", &dist[i].feet, &dist[i].inch);
    }

    addDistances(dist, n);

    return 0;
}
