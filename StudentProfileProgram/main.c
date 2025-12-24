#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char Name[30] = "";
    int age = 0;
    float gpa = 0.0f;
    bool isOnline = 1;
    if (isOnline) {

    }

    printf("Enter your name: ");
    fgets(Name,30,stdin);
    Name[strlen(Name)-1]='\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your gpa: ");
    scanf("%f",&gpa);

    printf("Are You Online?\n");
    scanf("%d",&isOnline);

    printf("----STUDENT PROFILE----\n");
    printf("Name: %s\n",Name);
    printf("Age: %d\n",age);
    printf("CGPA: %.2f\n",gpa);
    printf("Status: %s\n",isOnline ? "ONLINE" : "OFFLINE");
    return 0;
}