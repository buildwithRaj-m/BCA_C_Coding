#include<stdio.h>

void table(int n);

int main() {
  int n;

  printf("Enter number :\n");
  scanf("%d", & n);

  printf("Table of %d is\n", n);
  table(n);

  return 0;
}

void table(int n){
  for(int i = 1; i <= 10 ; i++){
    int multiply = i *n;
    printf(" %d\n", multiply);
  }
}