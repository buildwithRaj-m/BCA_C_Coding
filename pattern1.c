#include<stdio.h>

void printpattern(int n){
    for(int i= 0; i < n; i++){
        for(int j=0; j<n; j++){
            printf("* ");
        } printf("\n");
    } 
}

int main() {
     int t; 
     printf("Enter number of test cases:\n");
     scanf("%d", &t); 

     while(t--){
        int n;
        printf("Enter size for this test case:\n");
        scanf("%d", &n);  
        printpattern(n);

     }
        
        return 0;
} 
