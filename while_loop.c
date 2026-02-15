#include<stdio.h>
int main() {
    int number = 5;
    printf("Countdown Starts!\n");

    while(number>0) {
        printf("Counting down: %d\n",number);
        number--;
    }
    printf("Countdown finished!\n");

    return 0;
}