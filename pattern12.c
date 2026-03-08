#include<stdio.h>

void printpattern(int n){
    int space = 2*(n-1);
    for(int i = 1; i<=n ; i++){
        // numbers
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        //space
        for(int j = 1; j<=space; j++){
            printf(" ");
        }

        //numbers
         for(int j = i; j>=1; j--){
        printf("%d", j);
    }printf("\n");
    space -= 2;
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i<t; i++){
        int n;
        scanf("%d", &n);
        printpattern(n);
    }

}