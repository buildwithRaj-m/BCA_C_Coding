#include<stdio.h>

float percentage(float marks1, float marks2 , float marks3);

int main() {
    float science , maths , sanskrit;
   printf("Enter marks(science):");
   scanf("%f", & science);

   printf("Enter marks(maths):");
   scanf("%f", & maths);

   printf("Enter marks(sanskrit):");
   scanf("%f", & sanskrit);


    printf("Total percentage obtained :%.2f%%", percentage(science,maths,sanskrit));

    return 0;
}

float percentage(float marks1, float marks2 , float marks3){
    float marks = (marks1 + marks2 + marks3);
       float fmarks = (marks/300.0)*100.0;
    return fmarks;
}