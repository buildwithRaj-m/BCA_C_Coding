#include<stdio.h>

int main() {
    int age = 29;
    int *ptr = & age;
    printf("In int case :-\n");
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    printf("In float case:-\n");
    float num = 20.00;
    float *pptr = &num;
    printf("pptr = %u\n", pptr);
    pptr++;
    printf("pptr = %u\n", pptr);
    pptr--;
    printf("pptr = %u\n", pptr);

    printf("In char case:-\n");
    char star = '*';
    char *ptr1 = &star;
    printf("ptr1 = %u\n", ptr1);
    ptr1++;
    printf("ptr1 = %u\n", ptr1);
    ptr1--;
    printf("ptr1 = %u\n", ptr1);

    return 0;
}