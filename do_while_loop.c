#include<stdio.h>
int main() {
    int choice;
    printf("\n--- Do While Loop (Menu Example) ---\n");

    do{
        printf("\n SMART SHOPKEEPER MENU \n");
        printf("1. Calculate Discount\n");
        printf("2. Check Inventory\n");
        printf("0. Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        if(choice !=0) {
            printf("You selected option %d. Processing...\n",choice);

        }
    } while (choice !=0);

    printf("Exiting program. Thank you!\n");
    return 0;
}