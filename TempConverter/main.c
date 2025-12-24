#include <stdio.h>

int main() {

    // VARIABLES DECLARATION
    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    // USER INPUT
    printf("\nC. Celsius to Fahrenheit \n");
    printf("F. Fahrenheit to Celsius \n");
    printf("Choose your choice, (C) for Celsius OR (F) for Fahrenheit: ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c') {
        // CELSIUS TO FAHRENHEIT
        printf("Enter Temp in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * 1.8 + 32;
        printf("%.1f Celsius = %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F' || choice == 'f') {

        // FAHRENHEIT TO CELSIUS
        printf("Enter Temp in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("%1.f Fahrenheit = %1.f Celsius\n", fahrenheit, celsius);
    }
    else {
        printf("Invalid Choice! Enter C or F \n");
    }

    return 0;
}