#include<stdio.h>

float calculatetemp(float celsius);

int main() {
    int t;
    printf("Enter temperature :");
    scanf("%d", & t);

    printf("Fahrenheit :%.2f\n", calculatetemp(t));
    return 0;
}

float calculatetemp(float celsius){
    float fahrenheit;
    return fahrenheit = (celsius * 9.0/5.0) + 32;
}