#include <stdio.h>

int main() {

    // VARIABLE DECLARATION
    int choice = 0;
    float pounds = 0.0;
    float kilograms = 0.0;

    // CHOICE INPUT
    printf("\n======WEIGHT CONVERTER CALCULATOR======\n");
    printf("1. Kilograms To Pounds\n");
    printf("2. Pounds To Kiogram\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // KILOGRAMS TO POUNDS
        printf("\nEnter Kilogram: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms =  %.2f Pounds\n", kilograms, pounds);
    }
    else if (choice == 2) {
        // POUNDS TO KILOGRAMS
        printf("Enter Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds =  %.2f Kilograms\n", pounds, kilograms);
    }
    else {
        // INVALID CHOICE
        printf("Wrong Choice, Enter 1 or 2!!\n");
    }

    return 0;
}