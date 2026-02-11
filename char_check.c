#include<stdio.h>
int main() {
    char alphabet;
    printf("ENTER A CHARACTER\n",alphabet);
    scanf("%c",&alphabet);
    //write characters under ''
    if(alphabet>='a'&&alphabet<='z'){
        printf("YOU SELECTED LOWER CASE ALPHABET");
    }
        else if(alphabet>='A'&&alphabet<='Z'){
            printf("YOU SELECTED UPPER CASE ALPHABET");
        }//kyuki maine alphabet ko char mein liya hai to mujhe 0 aur 9 ko '' ke beech mein rakhna hoga
        else if(alphabet>='0'&&alphabet<='9'){
            printf("YOU SELECTED INTEGER");
        }
        else {
            printf("YOU SELECTED SPECIAL SYMBOL");
        }
    return 0;
}