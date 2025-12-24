#include <stdio.h>
#include <string.h>
int main() {

    char name[50] = "";
    char course[50] = "";
    char university[50] = "";

    printf("\nEnter Your Full Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter Your Course Of Study: ");
    fgets(course, sizeof(course), stdin);
    course[strlen(course) - 1] = '\0';

    printf("Enter Your University: ");
    fgets(university, sizeof(university), stdin);
    university[strlen(university) - 1] = '\0';

    printf("Dear Sir/Madam,\n\n");
    printf("My Name is %s, a %s Student at\n", name, course);
    printf("%s, applying for the Student \nIndustrial Work Experience(SIWES) Placement.\n\n", university);
    printf("I have attached my SIWES application form and\nother required documents for your consideration.\n\n");
    printf("Thank you four your time.");
    printf("\nBest regards,");
    printf("\n%s\n", name);
    return 0;
}