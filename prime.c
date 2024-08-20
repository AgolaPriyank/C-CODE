#include <stdio.h>
int main()
{
    int n, i, flag;

    printf("Enter the number:- ");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("This number is not prime number");
    }

    else
    {
        printf("This number is prime number");
    }

    return 0;
}