#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct content
{
    char value[15][3];
};

int main()
{
    char value[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    struct content club;
    struct content diamonds;
    struct content hearts;
    struct content spades;


    for (int i = 0; i < 13; i++)
    {
        strcpy(club.value[i], value[i]);
        strcpy(diamonds.value[i], value[i]);
        strcpy(hearts.value[i], value[i]);
        strcpy(spades.value[i], value[i]);
    }

    for (int i = 0; i < 13; i++)
    {
        printf("club\t %s \t", club.value[i]);
        printf("diamonds\t %s \t", diamonds.value[i]);
        printf("hearts\t %s \t", hearts.value[i]);
        printf("spades\t %s \t \n", spades.value[i]);
    }

    return 0;
}
