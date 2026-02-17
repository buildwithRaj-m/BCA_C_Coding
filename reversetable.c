#include<stdio.h>
int main() {
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);

    for(int i=10; i>=1; i--){
       int table = i*n;
        printf("%d\n",table);
    }
    return 0;
}