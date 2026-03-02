#include<stdio.h>
#include<string.h>

int main() {
    char name[] = "Raj";   //mentioning size of string is optional as compiler will automatically calculate it
    char surname[] = "Maurya";

     printf("%d\n", strcmp(surname, name)); // 0 if both strings are same, -1 if name is less than surname, 1 if name is greater than surname
    
    strcat(name, surname);
    puts(name);
    
    return 0;
   
}