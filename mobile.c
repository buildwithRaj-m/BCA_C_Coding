#include<stdio.h>
int main() {
    int quantity, choice;
    float price=0, total_bill;
    printf("WELCOME TO ROYAL MOBILE SHOP\n");
    printf("AVAILABLE STOCKS\n");
    printf("1) REALME MRP:15000rs\n");
    printf("2) SAMSUNG MRP:25000rs\n");
    printf("3) iPHONE MRP:80000rs\n");
    printf("4) OTHER BRANDS MRP:35000rs\n");

    printf("CHOOSE FROM (1-4) :\n", choice);
    scanf("%d", &choice);

    switch(choice){
        case 1 : 
        price=15000;
        printf("You selected REALME\n");
        break;
        case 2 :
        price=25000;
        printf("You selecteed SAMSUNG\n");
        break;
        case 3 :
        price=80000;
        printf("You selected iPHONE\n");
        break;
        case 4 :
        price=35000;
        printf("You selected OTHER BRANDS\n");
        break;
        default: printf("Stock Unavailable\n");
        return 0;
    }
    printf("ENTER Quantity:\n",quantity);
    scanf("%d",&quantity);

    total_bill = quantity*price;
    printf("TOTAL PAYABLE AMOUNT:%.2f\n",total_bill);
    printf("Congratulations on your purchase\n");
    printf("VISIT AGAIN\n");
    printf("HAVE A VERY GOOD DAY\n");
    return 0;
}