#include<stdio.h>

int countLength(char arr[]);

int main() {
    char name[100];
    fgets(name,100,stdin);
    puts(name);

    printf("Length of name is : %d\n", countLength(name));

    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] !='\0' ; i++){
        count++;
    }
    return count-1;  // -1 for new line character
}