#include<stdio.h>

int main() {

    char str[10];
    
    fgets(str,100,stdin);
    puts(str);

    char *canChange = "Hello World";  
    puts(canChange);
    canChange = "Hello";  //it can be reinitialized
    puts(canChange);

    char cannotChange[] = "Hiiiiii";  // canno be reinitialized
    puts(cannotChange);
     return 0;
}