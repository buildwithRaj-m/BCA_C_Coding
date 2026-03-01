#include <stdio.h>

int main(void)
{
    char s[] = "Hello";     
    char *p = s;            

    /* print the string using the pointer */
    printf("%s\n", p);

    /* modify the string via the pointer */
    p[1] = 'a';             
    printf("%s\n", s);

    return 0;
}
    