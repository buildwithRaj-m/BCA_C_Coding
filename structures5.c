#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;
};

void calculateSum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    struct vector v1 = {10 , 15};
    struct vector v2 = {4 , 8};
    struct vector sum = {0};

    calculateSum(v1 , v2 , sum);
    return 0;
}

void calculateSum(struct vector v1 , struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of vectors is : (%d , %d)\n", sum.x , sum.y);
}
