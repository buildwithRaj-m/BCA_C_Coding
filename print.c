#include<stdio.h>

int main() {
    int age;
    int *ptr;
    int **pptr;

    ptr = &age;
    pptr = &ptr;
    **pptr = 99;

    printf("Age is :%d", age);
    return 0;
}