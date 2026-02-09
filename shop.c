#include<stdio.h>
int main() {
    float bill , discount , total_amount;
    printf("Welcome to RAJ RATAN FASHION POINT!!\n");
    printf("Enter your bill:\n");
    scanf("%f", &bill);

    if(bill>=5000){
        printf("Congrats you got 20%% discount\n");
        discount = bill*0.2;
        printf("your discount is :%f\n",discount);
        total_amount = bill-discount;
        printf("Final amount :%.2f\n",total_amount);
    }
    else if(bill>=2000 && bill<5000){
        printf("Congrats you got 10%% discount\n");
        discount = bill*0.1;
        printf("your discount is :%f\n",discount);
        total_amount = bill-discount;
        printf("Final amount is :%.2f\n", total_amount);
    }
    else{
        printf("No discount available\n");
        printf("Final amount is:%.2f\n",bill);
    }
    printf("Have a good day\n");
    return 0;

}