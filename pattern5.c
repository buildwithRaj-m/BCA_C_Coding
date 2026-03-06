#include<stdio.h>

void printpattern(int n){
    for(int i= 1; i <=n; i++){
        for(int j=0; j<n-i+1; j++){
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


