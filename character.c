#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the ch:-");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Enter value is number");
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Enter value is capital character");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Enter value is small character");
    }

    else
    {
        printf("Enter value is special character");
    }

    return 0;
}