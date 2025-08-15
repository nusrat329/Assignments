#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    int marks[];
};

int main() {
    int n = 3;
    struct Student *student = (struct Student*)malloc(sizeof(struct Student) + n * sizeof(int));

    student->id = 101;
    snprintf(student->name, sizeof(student->name), "John Doe");

    student->marks[0] = 85;
    student->marks[1] = 90;
    student->marks[2] = 88;

    printf("Student ID: %d\n", student->id);
    printf("Student Name: %s\n", student->name);
    printf("Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", student->marks[i]);
    }
    printf("\n");

    free(student);

    return 0;
}
