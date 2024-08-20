#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:- ");
    scanf("%d", &a);

    printf("Enter the value of b:- ");
    scanf("%d", &b);

    printf("Enter the value of c:- ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is maximum value", a);
        }
        else
        {
            printf("%d is maximum value", c);
        }
    }
    else if (b > c)
    {
        printf("%d is maximum value", b);
    }
    else
    {
        printf("%d is maximum value",c);
    }

    return 0;
}