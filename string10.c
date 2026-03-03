#include<stdio.h>
#include<string.h>

void character(char str[], char ch);

int main(){
    char str[] = "HelloWorld, how are you doing rohit?";
    char ch= 'd';
    character(str,ch);
}

void character(char str[], char ch){
    
    for(int i=0; str[i] != '\0' ; i++){
        if(str[i] == ch){
            printf("Character is PRESENT in string");
            return ;
        }
        }
        printf("Character is NOT present in string");
    } 
