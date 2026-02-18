#include<stdio.h>

void printftable(int n);

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", & n);

    printftable(n); //argument / actual parameter

    return 0;
}

void printftable(int n) {  //parameter / formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
   
}