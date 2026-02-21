#include<stdio.h>

int main() {
    int number = 23;
    int *ptr = &number;

    printf("Value of number : %d\n", number);
    printf("Address of number : %p\n", *ptr);
    printf("Value of number : %d\n", *(&number));
    return 0;
}