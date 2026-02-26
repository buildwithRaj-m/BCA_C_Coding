#include<stdio.h>

int main() {
    int marks[3];

    printf("Enter phy :\n");
    scanf("%d", &marks[0]);

    printf("Enter chem :\n");
    scanf("%d", &marks[1]);

    printf("Enter maths :\n");
    scanf("%d", &marks[2]);

    printf("phy = %d\nchem = %d\nmaths = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}