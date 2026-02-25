#include<stdio.h>

void swap(int a , int b);
void _swap(int *a, int *b);

int main() {
    int x = 9;
    int y = 11;
    swap(x,y);
    printf("x = %d & y = %d\n", x , y);

    _swap(&x,&y);
    printf("x = %d\n & y = %d\n", x , y);
    return 0;

}

void swap(int a , int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d\n & b = %d\n", a,b);
}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
     printf("a = %d\n & b = %d\n", *a,*b);
}