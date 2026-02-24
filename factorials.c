#include<stdio.h>

int fact(int n);

int main() {
    int num;
    printf("Enter number :");
    scanf("%d", & num);

    printf("Factorial of %d is %d\n", num , fact(num));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}