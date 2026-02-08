#include<stdio.h>
// Average = (Sum of all numbers)/Total count of numbers
int main() {
    int a,b,c;
    printf("Enter a:");
    scanf("%d", &a);

     printf("Enter b:");
     scanf("%d", &b);

     printf("Enter c:");
     scanf("%d", &c);

     float avg = (a+b+c)/3.0;
     printf("Average is : %f",avg);
     return 0;
}