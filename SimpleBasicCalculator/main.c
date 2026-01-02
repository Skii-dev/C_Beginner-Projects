#include <stdio.h>

int main() {
    // Declarations
    double num1 = 0.0, num2 = 0.0;
    char operator = '\0';
    double result = 0.0;

    printf("==BASIC BEGINNER CALCULATOR==\n");

    printf("Please Enter First Number: ");
    scanf("%lf", &num1);

    printf("Please Enter An Opeartor(+ - / *): ");
    scanf(" %c", &operator);

    printf("Please Enter Second Number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.3lf %c %.3lf = %.3lf", num1, operator, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.3lf %c %.3lf = %.3lf", num1, operator, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.3lf %c %.3lf = %.3lf", num1, operator, num2, result);
            break;
        case '/':
           if (num2 == 0) {
               printf("You cant Divide By Zero!!\n");
           }
            else {
                result = num1 / num2;
                printf("%.3lf %c %.3lf = %.3lf", num1, operator, num2, result);
            }
            break;
            default:
            printf("Please Enter Valid Operator(+, -, *, /)\n");
    }


    return 0;
}