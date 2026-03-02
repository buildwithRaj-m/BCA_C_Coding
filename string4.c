#include<stdio.h>
#include<string.h>

int main() {
    char name[] = "RatanMaurya";
    printf("Length of name is : %d\n", strlen(name));

    char newname[] = "RajMaurya";
    strcpy(name ,newname);

    puts(name);

    return 0;
}