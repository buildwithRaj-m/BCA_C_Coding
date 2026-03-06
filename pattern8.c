#include<stdio.h>

void printpattern(int n) {
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            printf(" ");
        }
        //star
        for(int j=0; j< (2*n)-(2*i+1); j++){
            printf("*");
        }
        //space
        for(int j=0; j<i; j++){
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int t;
    printf("Enter number of test cases :\n");
    scanf("%d", &t);

    while(t--){
        int n;
        printf("Enter number of rows for this pattern :\n");
        scanf("%d", &n);
        printpattern(n);
    } 
}