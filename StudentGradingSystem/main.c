#include <stdio.h>

int main() {
    int testscore;
    printf("Enter test score(0-100):");
    scanf("%d",&testscore);

    if(testscore<0) {
        printf("Invalid Input!");
    }
    else if(testscore>=0 && testscore<50) {
        printf("You are a Failure Brah!! Try Harder");
    }
    else if(testscore>=50 && testscore<60) {
        printf("You Got C,Good One But Level Up!");
    }
    else if(testscore>=60 && testscore<70) {
        printf("Nice Try, you got B, But Doesn't A seem Beautiful?");
    }
    else if(testscore>=70 && testscore<=100) {
        printf("Hurray! you got an A, Keep it Up CHAMP");
    }
    else if(testscore>100) {
        printf("Invalid Input!");
    }
    return 0;
}