#include<stdio.h>
int main() {
    int age;
    printf("Welcome to SUNSHINE CINEMA HALL !!\n");

    printf("Enter Your Age :\n");
    scanf("%d", &age);

    printf("%s", (age<18)?"You are not allowed!!\n":(age>=60)?"YOU ARE ALLOWED.\nSpecial Senior Citizen discount applied.\n":"YOU ARE ALLOWED.\nStandard price applied.\n");
    printf("THANK YOU :)\n");
    return 0;
}