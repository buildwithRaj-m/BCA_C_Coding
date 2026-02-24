#include<stdio.h>

int fibnacci(int num);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d", & n);

    printf("Fibnacci of %d is %d\n", n , fibnacci(n));

    return 0;

}

int fibnacci(int num){
    if(num <= 1){
        return num;
    }
    int fibNm1 = fibnacci(num-1);
    int fibNm2 = fibnacci(num-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}