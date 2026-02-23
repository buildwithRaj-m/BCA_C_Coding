#include<stdio.h>
#include<math.h>

int main() {
    int n;

    printf("Enter number :\n");
    scanf("%d", & n);

    printf("Square of %d is %.2f\n", n , pow(n,2));

    return 0;
}