#include<stdio.h>
#include<math.h>

int main() {
    int number;
    printf("Enter number:");
    scanf("%d", & number);

   
    printf("Square of the number is :%.2f\n", pow(number,2));

    return 0;
}