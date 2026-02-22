#include<stdio.h>

int table(int n);

int main() {
    int n;

    printf("Enter number = ");
    scanf("%d", & n);
    printf("Table of %d is \n", n );
     table(n);
    
   
    return 0;
}

int table(int n){
    int multiply;
    for(int i=1 ; i<=10 ; i++){
         multiply =  i*n;
       printf("%d\n", multiply);
    }
    return multiply;
   
}