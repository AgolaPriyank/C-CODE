#include <stdio.h>
struct personal
{
    char name[20];
    char doj[20];
    int salary;
}s[2];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter diteal person %d\n",i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter doj: ");
        scanf("%s", s[i].doj);
        printf("Enter slalary: ");
        scanf("%d", &s[i].salary);

    }

    for(i=0;i<2;i++)
    {
        printf("person %d\n", i+1);

        printf("Name = %s\n", s[i].name);
        printf("doj = %s\n", s[i].doj);
        printf("salary = %d\n", s[i].salary);

    }

    return 0;
}

