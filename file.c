#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewText.txt", "r");
    if(fptr == NULL){
        printf("Error opening file\n");
    } else {
        fclose(fptr);
    } return 0;
}