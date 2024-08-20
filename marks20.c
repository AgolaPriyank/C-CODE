#include <stdio.h>
int main()
{
    int i;
    int Roll_no [20];
    float marks [20];

    for(i=0;i<=19;i++)
    {
        printf("student %d\n",i+1);

        printf("Enter Roll_no ");
        scanf("%d", &Roll_no[i]);

        printf("Enter marks ");
        scanf("%f", & marks[i]);

    }

    printf("Roll_no \tmarks\n");

    for(i=0;i<=19;i++)
    {
        printf("%d \t %f\n", Roll_no[i],marks[i]);
    }
    return 0;

}