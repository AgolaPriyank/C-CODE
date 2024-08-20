#include <stdio.h>
int main()
{
    int n, sum = 0, count = 0;
    float avg;
    int choice;

    do
    {
        printf("Enter the number:- ");
        scanf("%d", &n);
        sum = sum + n;
        count++;

        printf("You wont enter the number or not(1/0) ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

    } while (choice == 1);

    avg = (float)sum / count;

    printf("sum=%d\n avg=%f", sum, avg);

    return 0;
}