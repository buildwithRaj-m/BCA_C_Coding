#include<stdio.h>

void calculateprice(float price);

int main() {
    float price;

    printf("Enter the price\n");
    scanf("%f", & price);

    calculateprice(price);
    return 0;
}

void calculateprice(float price){
    float final_price = price + (0.18 * price);
    printf("Final Amount :- %.2frs\n", final_price);
}