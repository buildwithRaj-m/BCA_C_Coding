#include<stdio.h>

void printpattern(int n){
    for(int i=0; i<n; i++){ 
        for(char ch = 'A'; ch <= 'A'+ i; ch++){
            printf("%c" , ch);
        } printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        printpattern(n);
    }
}