/*this code is written by agola priyank
    DAT: 27/8/2023
    purpes: This code is made manejment of book for user */

#include <stdio.h>
#include <string.h>

// defineing howmany books you woant
#define BOOKS 3

// struct is store varies informashan of book
struct book
{
    char name[20];
    char author[20];
    int page;
    int price;
} B[BOOKS];

void printLine(void);

// This function is get data from user and print oetput
void getData(void);
void displayData(void);

// function to swp structer varibal
void swapStruct(int, int);

// sorting by varies paramitar
void sortByName(void);
void sortByAuthorName(void);
void sortByPages(void);
void sortByPrice(void);

int main()
{
    int choice;

    // input data from usre
    getData();

    while (1)
    {
        // ask user what kind of sorting he want
        printf("\n - Enter 1 to short data by Book Name :");
        printf("\n - Enter 2 to short data by Author Name : ");
        printf("\n - Enter 3 to short data by Pages :");
        printf("\n - Enter 4 to short data by Price :");
        printf("\n - Enter 0 to exit the program");

        scanf("%d", &choice);

        // to get user choice sorting and that according output is display
        switch (choice)
        {
        case 1:
            sortByName();
            displayData();
            break;

        case 2:
            sortByAuthorName();
            displayData();
            break;

        case 3:
            sortByPages();
            displayData();
            break;

        case 4:
            sortByPrice();
            displayData();
            break;

        case 0:
            printf("\n Exiting the programe...!");
            return 0;

        default:
            // invaled input values chose then
            printf("\nInvalide input....!");
            break;
        }
    }
    return 0;
}

// anyware we print line then we call the function
void printLine()
{
    printf("\n --------------------------------------------------------------------------------------------------");
}

// function is collect data of structer member from user
void getData()
{
    int i;

    for (i = 0; i < BOOKS; i++)
    {
        printLine();

        printf("\n Enter deatiale of book %d", i + 1);

        printf("\n Enter book name : ");
        scanf("%s", B[i].name);

        printf("\n Enter name of book Author : ");
        scanf("%s", B[i].author);

        printf("\n Enter number of pages of book : ");
        scanf("%d", &B[i].page);

        printf("\n Enter price of the book : ");
        scanf("%d", &B[i].price);

        printLine();
    }
}

// This function is print output store in structer
void displayData()
{
    int i;

    printf("\n detale of book ");
    printLine();

    for (i = 0; i < BOOKS; i++)
    {
        printf("\n Book Name =\t %s", B[i].name);
        printf("\n Author Name =\t %s", B[i].author);
        printf("\n Pages =\t %d", B[i].page);
        printf("\n Price =\t %d", B[i].price);
        printLine();
    }
}

// swap is interchange values of structer member
void swapStruct(int i, int j)
{
    struct book temp;

    temp = B[i];
    B[i] = B[j];
    B[j] = temp;
}

// This fun is sort a data according to name in ascending order
void sortByName()
{
    int i, j;
    for (i = 0; i < BOOKS; i++)
    {
        for (j = i + 1; j < BOOKS; j++)
        {
            if (strcmp(B[i].name, B[j].name) > 0)
            {
                swapStruct(i, j);
            }
        }
    }
}

// sort the data according to name of the author in acesending order
void sortByAuthorName()
{
    int i, j;

    for (i = 0; i < BOOKS; i++)
    {
        for (j = i + 1; i < BOOKS; j++)
        {
            if (strcmp(B[i].author, B[j].author) > 0)
            {
                swapStruct(i, j);
            }
        }
    }
}

// sort the data according to the page in acesending order
void sortByPages()
{
    int i, j;

    for (i = 0; i < BOOKS; i++)
    {
        for (j = i + 1; j < BOOKS; j++)
        {
            if (B[i].page > B[j].page)
            {
                swapStruct(i, j);
            }
        }
    }
}

// sort the data accordeing the price in acesending order
void sortByPrice()
{
    int i, j;

    for (i = 0; i < BOOKS; i++)
    {
        for (j = i + 1; j < BOOKS; j++)
        {
            if (B[i].price > B[j].price)
            {
                swapStruct(i, j);
            }
        }
    }
}
