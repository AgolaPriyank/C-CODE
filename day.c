#include <stdio.h>
int main()
{
    int day;

    printf("Enter the value of day:- ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
        printf("sunday");
        break;

        case 2:
        printf("monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("wednesday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("friday");
        break;

        case 7:
        printf("saturday");
        break;

        return 0;

    }
}