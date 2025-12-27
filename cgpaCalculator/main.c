#include <stdio.h>
#include <string.h>

int main() {

    char name[50];
    char department[50];
    int level;

    int unit1, unit2, unit3;
    char grade1, grade2, grade3;

    int gp1, gp2, gp3;
    float total_points;
    int total_units;
    float cgpa;

    //Student Info.
    printf("Please Enter Your Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Please Enter Your Department: ");
    fgets(department, sizeof(department), stdin);

    printf("Please Enter Your Level: ");
    scanf("%d", &level);

    // course 1
    printf("Enter Course 1 unit: ");
    scanf("%d", &unit1);
    printf("Enter Course 1 grade(A-F): ");
    scanf(" %c", &grade1);

    //course 2
    printf("Enter Course 2 unit: ");
    scanf("%d", &unit2);
    printf("Enter Course 2 grade(A-F): ");
    scanf(" %c", &grade2);

    // course 3
    printf("Enter Course 3 unit: ");
    scanf("%d", &unit3);
    printf("Enter Course 3 grade(A-F): ");
    scanf(" %c", &grade3);

    //grade conversions
    if (grade1 =='A') gp1 = 5;
    else if (grade1 =='B') gp1 = 4;
    else if (grade1 =='C') gp1 = 3;
    else if (grade1 =='D') gp1 = 2;
    else gp1 = 0;

    if (grade2 =='A') gp2 = 5;
    else if (grade2 =='B') gp2 = 4;
    else if (grade2 =='C') gp2 = 3;
    else if (grade2 =='D') gp2 = 2;
    else gp2 = 0;

    if (grade3 =='A') gp1 = 5;
    else if (grade3 =='B') gp3 = 4;
    else if (grade3 =='C') gp3 = 3;
    else if (grade3 =='D') gp3 = 2;
    else gp3 = 0;

    total_points = (gp1 * unit1) + (gp2 * unit2) + (gp3 * unit3);
    total_units = unit1 + unit2 + unit3;
    cgpa = total_points / total_units;

    printf("------STUDENT CGPA RESULT------\n");
    printf("Name: %s\n", name);
    printf("Department: %s\n", department);
    printf("Level: %d\n\n", level);
    printf("Total Unit: %d\n", total_units);
    printf("Total Grade Points: %.2f\n", total_points);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}