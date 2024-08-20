#include<stdio.h>
#include<string.h>
struct book
{
    char id [20];
    char name[20];
    int pri;
}b[5];
void info ()
{
    int i;

    for(i=0;i<=4;i++)
    {
        printf("\ info of %d\n", i+1);

         printf(" book id = ");
         scanf("%s\n",&b[i].id);

         printf("book name = ");
         scanf("%s\n",&b[i].name);
         getch();
         printf("book prise= ");
         scanf("%d\n", &b[i].pri);
         printf("\n\n");


    }

}

void dispaly()
{
    int i=0;

     for (i=0;i<=4;i++)
    {
        printf("\info of %d\n", i+1);
        printf("book name = %s\n", b[i].name);
        printf("book id = %S\n", b[i].id);
        printf("book prise = %d\n", b[i].pri);
        printf("\n\n");

    }

}

void main()
{
    int i=0,j;
    info(b);
    struct book temp;

    for(i=0;i<4;i++)
    {
        for (j=i+1;j<=4;j++)
        {

            if(strcmp(b[i].name,b[j].name)>1)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;

            }
        }
    }

   dispaly();

}
