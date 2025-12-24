#include <stdio.h>
#include <math.h>
int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;
    char unitOfmeasurement[5] = "cm";

    printf("Please enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The Area is: %.2lf%s\n", area, unitOfmeasurement);
    printf("The Surface Area is: %.2lf%s\n", surfaceArea, unitOfmeasurement);
    printf("The Volume is: %.2lf%s", volume, unitOfmeasurement);

    return 0;
}