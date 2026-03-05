#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewFile.txt", "r");

    int num;
    fscanf(fptr, "%d", &num);
    printf("Number : %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number : %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number : %d\n", num);
    fclose(fptr);
    return 0;
}