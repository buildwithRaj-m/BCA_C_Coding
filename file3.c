#include<stdio.h>

 int main() {
    FILE *fptr;
    fptr = fopen("Text.txt", "w");

    if(fptr == NULL) {
        printf("Error !!");
        return 1;  // Exit with error code
    }

    //METHOD 1 : Character by character;
    char ch;
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c" , 'a');
    fprintf(fptr, "%c" , 'n');
    fprintf(fptr, "%c" , 'g');
    fprintf(fptr, "%c" , 'o');

    //METHOD 2 : Directly writing string
    fprintf(fptr, "\nMango , apple\n");
    fclose(fptr);
    return 0;
 }