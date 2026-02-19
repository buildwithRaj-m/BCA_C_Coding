#include<stdio.h>

void calculateprice(float value);

int main() {
    float value;
    printf("Enter amount:\n");
    scanf("%f", & value);

    printf("Value is %f\n", value);

    calculateprice(value);

    return 0;
}

void calculateprice(float value){
    value = value + (value*0.18);
    printf("FINAL AMOUNT IS :%f\n",value);
}