#include<stdio.h>

void printpattern(int n){
    for(int i= 1; i <=2*n-1; i++){
        int stars= i;
        if(i > n){
            stars = 2*n - i;
        }
        for(int j=1; j<=stars; j++){
            printf("*");
        } printf("\n");
    }
}

int main() {
    int t;
    printf("Enter the of test cases :\n");
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printpattern(n);
    }
}