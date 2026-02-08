#include<stdio.h>
// Even if answer is-> 0
// Odd if answer is-> 1
int main() {
int a;
printf("Enter a:");
scanf("%d", &a);

printf("answer is %d\n", a%2 );
return 0;
}