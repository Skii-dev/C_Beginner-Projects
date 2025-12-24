#include <stdio.h>
#include <string.h>

int main() {

    char username[50];
    int passcode;
    int createpasscode;

    printf("Enter your username: ");
    fgets(username, 50, stdin);
    username[strlen(username) - 1] = '\0';

    printf("Create A Passcode: ");
    scanf("%d", &createpasscode);
    printf("Passcode created!!\n");


    printf("\nUsername: %s\n", username);
    printf("Enter passcode: ");
    scanf("%d", &passcode);


    if(passcode == createpasscode) {
        printf("ACCESS GRANTED %s!!\n", username);
    }
    else {
        printf("WRONG PASSCODE!! ACCESS DENIED!\n");
    }
    return 0;
}
