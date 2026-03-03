#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int age;
    float cgpa;
};

int main() {
    struct student s1;
    s1.name[0]= '\0'; // Initialize the name to an empty string
    s1.age = 0; // Initialize age to 0
    s1.cgpa = 0.0; //Initialize cgpa to 0.0
    printf("Enter name:\n");
    fgets(s1.name,100,stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; // Remove the newline character from the name

    printf("Enter age :\n");
    scanf("%d", &s1.age);

    printf("Enter cgpa :\n");
    scanf("%f", &s1.cgpa);

    printf("Name is : %s\n", s1.name);
    printf("Age is : %d\n", s1.age);
    printf("CGPA is : %.2f\n", s1.cgpa);
    return 0;
}