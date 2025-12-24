#include <stdio.h>
#include <math.h>
int main() {

    //DECLARING VARIABLES
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timescompounded = 0;
    double total = 0.0;
    char USD = '$';

    printf("\n======COMPOUND INTEREST CALCULATOR======\n");

    //USER INPUT
    printf("Enter the principal(p): ");
    scanf("%lf", &principal);

    printf("Enter the rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the years(t): ");
    scanf("%d", &years);

    printf("Enter the timescompounded per year(n): ");
    scanf("%d", &timescompounded);

    //FORMULA FOR COMPOUND INTEREST
    total = principal * pow(1 + rate / timescompounded, timescompounded * years);

    //OUTPUTS
    printf("\nPrincipal = %c%.2lf\n", USD, principal);
    printf("Rate = %.2lf\n", rate);
    printf("Years = %d Year(s)\n", years);
    printf("Times Compounded = %dx\n", timescompounded);
    printf("Your Interest Rate is = %c%.2lf\n", USD, total);

    return 0;
}