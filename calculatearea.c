#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float l , float b);

int main() {
    int choice;
    float side,rad,l,b;
    printf("Choose area of :-\n 1.square\n 2.circle\n 3.rectangle\n");
    scanf("%d", & choice);

    switch(choice){
        case 1:
        printf("Enter side of square:\n");
        scanf("%f", & side);
        printf("Area of square is :%f\n", squarearea(side));
        break;

        case 2:
        printf("Enter rad of circle:\n");
        scanf("%f", & rad);
        printf("Area of circle is : %f\n", circlearea(rad));
        break;

        case 3:
        printf("Enter lenght :\n");
        scanf("%f", & l);
        printf("Enter breadth :\n");
        scanf("%f", & b);
        printf("Area of rectangle is :%f\n", rectanglearea(l , b));
        break;

        default :
            printf("Choose between given options !!!!\n");
            break;
    }
    return 0;

}

float squarearea(float side){
    return pow(side,2);
}
float circlearea(float rad){
    return 3.14 * pow(rad , 2);
}
float rectanglearea(float l , float b){
    return l * b;
}