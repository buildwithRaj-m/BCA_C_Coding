#include<stdio.h>
#include<string.h>

int countvowels(char str[]);

int main() {
    char str[]= "HelloWorld How are you?";
    printf("Vowels are :%d", countvowels(str));

}

int countvowels(char str[]){
    int count = 0; 
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i]== 'i' || str[i] =='o' || str[i] == 'u'||
            str[i] == 'A' || str[i] =='E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
            }
        
    } return count;
}