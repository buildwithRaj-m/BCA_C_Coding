#include<stdio.h>

int main() {
    float price[3];
    printf("Enter 3 prices : \n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total price without gst :%.2f\n", price[0]+price[1]+price[2]);

    float f_price1 = price[0]+(price[0]*0.18);
    float f_price2 = price[1]+(price[1]*0.18);
    float f_price3 = price[2]+(price[2]*0.18);
    float final = f_price1 + f_price2 + f_price3;

    printf("Final amount with gst : %.2f\n",final);
    printf("Thank you :)\n");
    return 0;

}