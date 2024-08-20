#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    printf("Enter s1: ");
    gets(s1);

    strupr(s1);

    printf("s1 = %s", s1);
    return 0;
}