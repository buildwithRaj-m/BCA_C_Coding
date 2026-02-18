#include<stdio.h>

void namaste();
void bonjour();

int main() {

    printf("Enter f for FRENCH & i for INDIA :");
    char ch;
    scanf("%c", &ch);

    if(ch=='i'){
        namaste();
    }else {
        bonjour();
    }
    return 0;

}
void namaste() {
    printf("NAMASTE!\n");
}
void bonjour() {
    printf("BONJOUR!\n");
}