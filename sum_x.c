#include<stdio.h>

int sum(int x , int y);

int main() {
    int a,b;

    printf("Enter a = \n");
    scanf("%d", & a);

    printf("Enter b = \n");
    scanf("%d", & b);

    int s = sum(a,b);
   printf("sum is %d\n", s);

    return 0;
}

int sum(int x , int y){
    return x + y;
}