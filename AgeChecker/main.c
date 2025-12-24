#include <stdio.h>
#include <string.h>
int main() {

    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);


    printf("\nName:%s\n", name);
    printf("Age:%d\n", age);

    if (age >= 18) {
        printf("Status: Adult\n", age);
    }
    else {
        printf("Status: Minor\n", age);
    }
    return 0;
}