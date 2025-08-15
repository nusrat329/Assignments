#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

void sortByAge(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].age > students[j].age) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortById(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].id > students[j].id) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter student %d ID: ", i + 1);
        scanf("%d", &students[i].id);
        printf("Enter student %d name: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Enter student %d age: ", i + 1);
        scanf("%d", &students[i].age);
    }

    printf("\nSort by: 1. Age  2. ID\n");
    scanf("%d", &choice);

    if (choice == 1) {
        sortByAge(students, n);
    } else if (choice == 2) {
        sortById(students, n);
    }

    printf("\nSorted Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }

    return 0;
}
