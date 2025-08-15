#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {101, "John Doe", 85.5};
    struct Student student2;

    FILE *file = fopen("student.dat", "wb");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&student1, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("student.dat", "rb");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&student2, sizeof(struct Student), 1, file);
    fclose(file);

    printf("Student ID: %d\n", student2.id);
    printf("Student Name: %s\n", student2.name);
    printf("Student Marks: %.2f\n", student2.marks);

    return 0;
}
