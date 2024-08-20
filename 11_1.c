#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks; 
}s,*p;

int main()
{
    p = &s;

    printf("Enter name: ");
    scanf("%s", p->name);
    printf("Enter rool_no: ");
    scanf("%d", & p->roll_no);
    printf("enter marks: ");
    scanf("%f", & p->marks);

    printf("\n--------student details---------\n");
    printf("Name = %s\n", p->name);
    printf("Roll_No = %d\n", p->roll_no);
    printf("marks = %f\n", p->marks);

    return 0;
}
