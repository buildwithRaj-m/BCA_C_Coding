#include<stdio.h>

void printpattern(int n);

int main() {
     int n;
     printf("Enter the number of rows and columns for the pattern:\n");
     scanf("%d", &n);
        printpattern(n);
        return 0;
} 

void printpattern(int n){
    for(int i= 0; i < n; i++){
        for(int j=0; j< n; j++){
            printf("* ");
        } printf("\n");
    } return;
}

