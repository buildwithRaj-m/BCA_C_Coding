#include<stdio.h>

void printpattern(int n){
     int num= 1;
     for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num = num + 1;
        } printf("\n");
     }
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i= 0;i<t; i++){
        int n;
        scanf("%d", &n);
        printpattern(n);
    }
}