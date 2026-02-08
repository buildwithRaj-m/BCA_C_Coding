#include<stdio.h>

int main() {
    int a;
    printf("Enter number a:");
    scanf("%d", &a);

    int b;
    printf("Enter number b:");
    scanf("%d", &b);

    printf("The remainder is :%d\n", a%b);
    return 0;
}