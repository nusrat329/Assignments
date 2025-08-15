#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void sortByName(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter student %d roll number: ", i + 1);
        scanf("%d", &students[i].rollNo);
        printf("Enter student %d name: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Enter student %d marks: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    sortByName(students, n);

    printf("\nSorted Student Records by Name:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
