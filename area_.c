#include<stdio.h>
#include<math.h>

int main() {
    int r,s,l,b;
    int choice;
    float area;
    printf("Choose from the following:-\n");
    printf("1.Calculate area of a square\n");
    printf("2.Calculate area of a circle\n");
    printf("3.Calculate area of a rectangle\n");
    printf("Enter your choice:\n");
    scanf("%d", & choice);

    switch(choice){
        case 1 : 
        printf("Enter the side of square\n");
        scanf("%d", & s);
        area = pow(s , 2);
        printf("Area of square is :%.2f\n", area);
        break;
        case 2 :
        printf("Enter the radius of circle:\n");
        scanf("%d", & r );
        area = 3.14*pow(r , 2);
        printf("Area of circle is :%.2f\n", area);
        break;
        case 3 :
        printf("Enter the length of rectangle\n");
        scanf("%d", & l);
         
        printf("Enter the breadth of rectangle:\n");
        scanf("%d", & b);

        area = l * b;
        printf("Area of the rectangle is %.2f\n", area);
        break;
        default : 
        printf("Choose between option (1-3)only !!!!!!\n");
        break;
    }
    printf("Thank you :-)\n");
    return 0;
}