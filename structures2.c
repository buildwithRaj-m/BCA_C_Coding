#include<stdio.h>
#include<string.h>

//user defined
struct student {
    char name[100];
    int age;
    float cgpa;
};

int main() {
    struct student ece[100]; // Array of students
    ece[0].age = 20;
    ece[0].cgpa =7.0;
    strcpy(ece[0].name, "Priyanshu");

    printf("Name is :%s\n", ece[0].name);
    printf("Age is :%d\n", ece[0].age);
    return 0;
}