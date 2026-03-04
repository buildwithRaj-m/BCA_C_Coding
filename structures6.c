#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};

int main() {
    struct complex number1 = {10, 6};
    struct complex *ptr = &number1;
    printf("Real part is : %d\n", ptr->real);
    printf("Imaginary part is : %d\n", ptr->img);
    return 0;

}