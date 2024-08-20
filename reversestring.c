#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("Enter s1: ");
    gets(s1);

    strrev(s1);

    printf("reverse string = %s", s1);
    return 0;
}