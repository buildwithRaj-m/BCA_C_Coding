#include<stdio.h>
int main() {
    float celcius;
    printf("enter celcius :");
    scanf("%f", &celcius);

    printf("fahrenheit is : %f\n",celcius*9/5+32);
    return 0;
}