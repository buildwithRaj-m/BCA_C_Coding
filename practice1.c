#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char str1[20] = "Hello";
    char str2[20] = "World";
    char result[40];
    
    // String concatenation
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    
    // Print the result
    printf("Concatenated String: %s\n", result);
    
    // String length
    printf("Length of str1: %d\n", strlen(str1));
    
    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    
    return 0;
}