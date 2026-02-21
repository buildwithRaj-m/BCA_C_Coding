#include<stdio.h>

int main() {
    int value = 999;
    int *ptr = &value;
    int **pptr = &ptr;

    printf("Value : %d\n", value);
    printf("Value via ptr : %d\n", *ptr);
    printf("Value via pptr : %d\n", **pptr);

    return 0;
}