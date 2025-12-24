#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';

    printf("Enter Item: ");
    fgets(item, sizeof(item),stdin);
    item[strlen(item)-1] = '\0';

    printf("Enter Quantity: ");
    scanf("%d",&quantity);

    printf("Enter Price: ");
    scanf("%f",&price);

    float total_cost = quantity * price;

    printf("Item: %s\n",item);
    printf("Quantity: %d\n", quantity);
    printf("Price: $%.2f\n", price);
    printf("Total Cost: %c%.2f\n",currency,total_cost);
    return 0;
}
