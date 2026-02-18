#include<stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter number:\n");
    scanf("%d", &a);
    printf("Enter number:\n");
    scanf("%d", &b);

    int s = sum( a , b);
    printf("Sum is %d\n", s);

}
int sum(int x, int y) {
    return x + y;
}