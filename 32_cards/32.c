#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct content
{
    char name[20];
    char value[15];
    
};

int main()
{
    struct content club;
    struct content diamonds;
    struct content hearts;
    struct content spades;
    strcpy(club.name, "club");
    strcpy(diamonds.name, "diamonds");
    strcpy(hearts.name, "hearts");
    strcpy(spades.name, "spades");

    for (int i = 0; i < 13; i++)
    {
        club.value[i]=i+'0';
        diamonds.value[i]=i+'0';
        hearts.value[i]=i+'0';
        spades.value[i]=i+'0';
    }
    club.value[0] = 'A';
    diamonds.value[0] = 'A';
    hearts.value[0] = 'A';
    spades.value[0] = 'A';

    
	club.value[11] = 'j';
    diamonds.value[11] = 'j';
    hearts.value[11] = 'j';
    spades.value[11] = 'j';

     
    club.value[12] = 'Q';
    diamonds.value[12] = 'Q';
    hearts.value[12] = 'Q';
    spades.value[12] = 'Q';

    club.value[13] = 'K';
    diamonds.value[13] = 'K';
    hearts.value[13] = 'K';
    spades.value[13] = 'K';


    for (int i = 0; i < 14; i++)
    {
        printf("club\t %c \t", club.value[i]);
        printf("diamonds\t %c \t", diamonds.value[i]);
        printf("hearts\t %c \t", hearts.value[i]);
        printf("spades\t %c\n", spades.value[i]);
    }

    return 0;
}
