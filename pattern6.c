#include<stdio.h>

void printpattern(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n-i+1 ; j++){
            printf("%d ", j);
        }printf("\n");
    }
}

int main() {
    int t;
    printf("Enter number of text cases :\n");
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        printpattern(n);
    }
    return 0;
}