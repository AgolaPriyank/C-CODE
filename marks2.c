#include <stdio.h>
int main()
{
    int marks;

    printf("Enter your marks:- ");
    scanf("%d", & marks);

    if (marks < 0 || marks > 100)
    {
        printf("Enter value is out of range");
    }

    else if (marks >= 80)
    {
        printf("You got distinction");
    }

    else if (marks >= 60)
    {
        printf("You got first class");
    }

    else if (marks >= 40)
    {
        printf("You got second class");
    }

    else
    {
        printf("you are fail...!");
    }

    return 0;
}
