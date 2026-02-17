#include<stdio.h>
int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("FINAL FACTORIAL IS :%d\n", fact);
    return 0;
}