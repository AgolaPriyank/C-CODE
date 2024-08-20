#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter the value of marks:-");
    scanf("%d", &marks);

    if (marks >= 23)
    {
        printf("You are pass\n");
    }

    else
    {
        printf("You are fail");
    }

    return 0;
}