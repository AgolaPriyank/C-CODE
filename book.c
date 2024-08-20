#include<stdio.h>
#include<string.h>
struct book
{
    int id [20];
    char name[20];
    int pri;
}b[5];
void info ()
{
    int i;
    
    for(i=0;i<=4;i++)
    {
        printf("\n enter info of %d\n", i+1);

         printf(" book id = ");
         scanf("%d\n",&b[i].id);
         
         printf("book name = ");
         scanf("%s\n",&b[i].name);
         
         printf("book prise= ");
         scanf("%d\n", &b[i].pri);
         printf("\n\n");
        getch();


    }

}

void dispaly()
{
    int i=0;

     for (i=0;i<=4;i++)
    {
        printf("\n info of %d \n", i+1);
        printf("book name = %s\n", b[i].name);
        printf("boof id = %d\n", b[i].id);
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
