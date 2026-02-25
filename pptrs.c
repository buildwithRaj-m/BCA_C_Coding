#include<stdio.h>

int main() {
    int num = 50;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Address of num :%p\n", ptr);
    printf("Address of num :%p\n", &num);
    printf("Address of num :%p\n", ptr);
    printf("Address of num :%p\n", pptr);
    printf("Address of num :%p\n", &ptr);
    return 0;

}