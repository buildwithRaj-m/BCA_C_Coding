#include<stdio.h>

int sum(int number);

int main() {
    int n;

    printf("Enter number:");
    scanf("%d", & n);

   printf("Sum is :%d\n",sum(n));
    return 0;
}

int sum(int number){
    if(number == 1){   //Base case
        return 1;
    }
   int sumNm1 = sum(number -1);
   int sumN = sumNm1 + number;
   return sumN;
}