#include <stdio.h>
int main()
{
    int num;

    printf("Enter the value of num :- ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Enter value is zero");
    }
    else if (num > 0)
    {
        printf("Enter value is positive");
    }

    else
    {
        printf("Enter value is negative");
    }

    return 0;
}