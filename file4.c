#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewFile.txt", "r");

    printf("%d\n", fgetc(fptr));
    printf("%d\n", fgetc(fptr));
    printf("%d\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}