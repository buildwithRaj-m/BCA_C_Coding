#include<stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int number = 6;
    square(number);
    printf("number is : %d\n", number);

    _square(&number);
    printf("Square is :%d\n", number);

    return 0;
}

void square(int n){
    n = n * n;
    printf("Square is : %d\n", n);
}
void _square(int* n){
    *n = (*n) * (*n);
    printf("Square :%d\n", *n);
}