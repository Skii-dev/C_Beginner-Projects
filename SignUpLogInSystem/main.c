#include <stdio.h>

int main() {
    // VARIABLE DECLARATION
    int createuserID = 0;
    int userID = 0;
    int createpasscode = 0;
    int passcode = 0;

    // USER CHOICE INPUT
    printf("====WELCOME TO SKII'S C_BEGINNER PROJECTS====\n");

        // SIGNUP
        printf("Enter Desired UserID: ");
        scanf("%d", &createuserID);

        printf("Create Passcode: ");
        scanf("%d", &createpasscode);
        printf("Profile Created Successfully!\n");

        //LOGIN
        printf("Enter UserID: ");
        scanf("%d", &userID);

        printf("Enter Passcode: ");
        scanf("%d", &passcode);

        //CHECK IF USERNAME AND PASSCODE IS CORRECT
        if (createuserID == userID && createpasscode == passcode) {
            printf("WELCOME USER %d\n", userID);
        }
    else {
        printf("WRONG CREDENTIALS\n");
    }
    return 0;
}