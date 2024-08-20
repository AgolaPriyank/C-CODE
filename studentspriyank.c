#include <stdio.h>
#include <string.h>

#define STUDENTS 3

struct students
{
    char name[30];
    char enNo[13];
    int marks1;
    int marks2;
    int marks3;
    int total;
    float avrage;
} S[STUDENTS];

void printLine();

// get input and output from  user
void getData();
void displayData();

// interchanging valus of structchar mamber
void swap(int, int);

void sortByName();
void sortByEnNO();
void sortByTotal();
void sortByAvrage();

void printLine()
{
    printf("\n--------------------------------------------------------------------------------------------");
}

int main()
{
    int choice;
    getData();
    while (1)
    {
        printf("\n - Enter 1 for sort by name : ");
        printf("\n - Enter 2 for sort by En_No : ");
        printf("\n - Enter 3 for sort by total : ");
        printf("\n - Enter 4 for sort by avrage:");
        printf("\n - Enter 0 for exit from program:");

        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            sortByName();
            displayData();
            break;

        case 2:
            sortByEnNO();
            displayData();
            break;

        case 3:
            sortByTotal();
            displayData();
            break;

        case 4:
            sortByAvrage();
            displayData();
            break;

        case 0:
            printf("exiting from program...!");
            return 0;

        default:
            printf("Invalide input....!");
            break;
        }
    }
    return 0;
}

void getData()
{
    int i;
    for (i = 0; i < STUDENTS; i++)
    {
        printLine();
        printf("\nEnter data of syudent [%d]", i + 1);

        printf("\nEnter student name : ");
        scanf("%S", S[i].name);

        printf("\nEntre student En_No : ");
        scanf("%s", S[i].enNo);

        printf("\nEnter marks1 : ");
        scanf("%d", &S[i].marks1);
        S[i].total = S[i].marks1;

        printf("\nEnter marks2 : ");
        scanf("%d", &S[i].marks2);
        S[i].total += S[i].marks2;

        printf("\nEnter marks3 : ");
        scanf("%d", &S[i].marks3);
        S[i].total += S[i].marks3;

        S[i].avrage = S[i].total / 3;
        printLine();
    }
}

void displayData()
{
    int i;
    printf("\nData of the student:");
    for (i = 0; i < STUDENTS; i++)
    {
        printLine();
        printf("\nStudent name = %s", S[i].name);
        printf("\nStudent En_No = %s", S[i].enNo);
        printf("\nTotal = %d", S[i].total);
        printf("\nAvrage = %f", S[i].avrage);
        printLine();
    }
}

void swap(int i, int j)
{
    struct students temp;

    temp = S[i];
    S[i] = S[j];
    S[j] = temp;
}

void sortByName()
{
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = i + 1; j < STUDENTS; j++)
        {
            if (strcmp(S[i].name, S[j].name) > 0)
            {
                swap(i, j);
            }
        }
    }
}

void sortByEnNo()
{
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = i + 1; j < STUDENTS; j++)
        {
            if (strcmp(S[i].enNo, S[j].enNo) > 0)
            {
                swap(i, j);
            }
        }
    }
}

void sortByTotal()
{
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = i + 1; j < STUDENTS; j++)
        {
            if (S[i].total > S[j].total)
            {
                swap(i, j);
            }
        }
    }
}

void sortByAvrage()
{
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = i + 1; j < STUDENTS; j++)
        {
            if (S[i].avrage > S[j].avrage)
            {
                swap(i, j);
            }
        }
    }
}
