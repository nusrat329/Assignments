#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float fahrenheit, celsius, pounds, kilograms, inches, centimeters;

    printf("Select the conversion type:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("3. Pounds to Kilograms\n");
    printf("4. Kilograms to Pounds\n");
    printf("5. Inches to Centimeters\n");
    printf("6. Centimeters to Inches\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("Celsius: %.2f\n", celsius);
            break;
        case 2:
            printf("Enter Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Fahrenheit: %.2f\n", fahrenheit);
            break;
        case 3:
            printf("Enter Pounds: ");
            scanf("%f", &pounds);
            kilograms = pounds * 0.453592;
            printf("Kilograms: %.2f\n", kilograms);
            break;
        case 4:
            printf("Enter Kilograms: ");
            scanf("%f", &kilograms);
            pounds = kilograms / 0.453592;
            printf("Pounds: %.2f\n", pounds);
            break;
        case 5:
            printf("Enter Inches: ");
            scanf("%f", &inches);
            centimeters = inches * 2.54;
            printf("Centimeters: %.2f\n", centimeters);
            break;
        case 6:
            printf("Enter Centimeters: ");
            scanf("%f", &centimeters);
            inches = centimeters / 2.54;
            printf("Inches: %.2f\n", inches);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
