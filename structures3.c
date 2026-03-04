#include<stdio.h>
#include<string.h>



struct student{
    char name[100];
    int age;
    float cgpa;
};

void printInfo(struct student s1);

int main() {
    struct student s1 = {"Raj", 21 ,9.0};
    struct student s2 = {"Aman", 22, 7.5 };
    struct student s3 = {0};
    
    struct student *ptr = &s2; // Pointer to structure
    printf("Student.age with ptr = %d\n", (*ptr).age); //Dot format
    printf("Student->age =%d\n", ptr->age); //Arrow format
    printf("\n");
    printf("Student name :%s\n", ptr->name);
    printf("Student cgpa :%.2f\n", ptr->cgpa);
    printf("Student age: %d\n", ptr->age);
    printf("\n");

    printInfo(s1);
    printf("Age of s1:%d\n", s1.age);
    return 0;
}

void printInfo(struct student s1){
    printf("Student Information\n");
    printf("Name :%s\n", s1.name);
    printf("Age :%d\n", s1.age);
    printf("Cgpa: %.2f\n", s1.cgpa);
    s1.age = 25; //This will not change the age of s1 in main function as it's passing by value
}