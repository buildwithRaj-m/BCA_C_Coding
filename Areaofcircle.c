#include<stdio.h>

int main() {
    int radius;
    printf("enter radius :");
    scanf("%d", &radius);

    float area = 3.14*radius*radius;
    printf("Area of circle is :%f\n", area);
    return 0;
}