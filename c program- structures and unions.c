#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    struct Person person1 = {"Alice", 30};
    union Data data;

    data.i = 10;

    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Union Integer: %d\n", data.i);

    data.f = 3.14;
    printf("Union Float: %.2f\n", data.f);

    data.i = 20;
    printf("Union Integer after modification: %d\n", data.i);

    return 0;
}
