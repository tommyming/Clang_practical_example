#include <stdio.h>
#include <string.h>
struct book
{
    char name[100][20];
    char address[100][100];
    char code[100][20];
    char phone[100][20];
} logbook;

int main()
{
    int counter = 0;
    while (1)
    {
        printf("Please input the Nano\n");
        
        if (scanf("%s", logbook.name[counter])==-1)
        {
            break;
        }
        else
        {
            printf("address:\n");
            scanf("%s", logbook.address[counter]);
            printf("Please input your zip code\n");
            scanf("%s", logbook.code[counter]);
            printf("input phone number\n");
            scanf("%s", logbook.phone[counter]);
            counter++;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        printf("Name: \t %s", logbook.name[i]);
        printf("Address: \t %s", logbook.name[i]);
        printf("Code : \t %s", logbook.code[i]);
        printf("Phone number \t %s", logbook.phone[i]);
    }
}
