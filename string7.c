#include<stdio.h>
#include<string.h>

int main() {
    char password[100];
    printf("Enter your password:\n");
    fgets(password, 100, stdin);

    password[strcspn(password, "\n")] = '\0'; //Removal of new line character

    char salt[] = "1234";
    strcat(password, salt);
    puts(password);

    
}