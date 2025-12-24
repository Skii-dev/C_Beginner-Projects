#include <stdio.h>

int main() {
    float temperature;
    printf("Enter temperature: ");
    scanf("%f",&temperature);
    if (temperature <=0) {
        printf("Its Mad Cold Innit?!!\n");
    }
   else if (temperature >0 && temperature <=20) {
        printf("Its Cold!!\n");
    }
    else if (temperature > 20 && temperature <=30) {
        printf("Its Normal!!\n");
    }
    else if (temperature > 30 && temperature <=40) {
        printf("Its Hot!!\n");
    }
    else {
        printf("Its Mad Hot Innit?!!\n");
    }
    return 0;
}