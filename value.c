#include<stdio.h>

int main() {
    int score = 50;
    int *p = &score;

    printf("Old score : %d\n", score);

    *p = 100;  // Changing the value at the address p points to

    printf("New Score : %d\n", score);

    return 0;
}