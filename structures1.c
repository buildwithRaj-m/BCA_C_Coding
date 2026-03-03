#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int age;
    float cgpa;
};

int main() {
    struct student s1;
    strcpy(s1.name, "Rohit Kumar");
    s1.age = 20;
    s1.cgpa = 9.0;
    printf("Nmae is :%s\n", s1.name);
    printf("Age is :%d\n", s1.age);
    printf("CGPA is :%.2f\n", s1.cgpa);

     printf("\n");

    struct student s2;
    s2.age = 23;
    s2.cgpa = 8.9;
    strcpy(s2.name, "Prakhar Tiwari");
    
    printf("Name is :%s\n", s2.name);
    printf("Age is :%d\n" , s2.age);
    printf("CGPA is :%.2f\n", s2.cgpa);

    printf("\n");

    struct student s3;
    s3.age = 22;
    s3.cgpa = 7.5;
    strcpy(s3.name, "Shradha singh");

    printf("Enter name: %s\n", s3.name);
    printf("Age is: %d\n", s3.age);
    printf("CGPA is :%.2f\n", s3.cgpa);

    return 0;

}