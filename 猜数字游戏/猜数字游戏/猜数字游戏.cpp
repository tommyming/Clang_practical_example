#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	unsigned seed;
	seed = (unsigned)time(NULL);
	srand(seed);
	printf("===This is a Number Guess Game===\n");
	int password=0;
	int num=0;
	while (password!=1234)
	{
		printf("Please input password:");
		scanf_s("%d", &password);
	}
	printf("Please input a number between 1 to 100");
	scanf_s("%d", &num);
	int ran = rand()%100+1;
	printf("%d\n", ran);
	
	while (num!=ran)
	{
		if (num>ran)
		{
			if ((num-ran)>=10)
			{
				printf("Too large");
				scanf_s("%d", &num);
			}
			else {
				printf("liitle larger than the num");
				scanf_s("%d", &num);
			}
		}
		else if(num<ran)
		{
			if ((ran-num)>10)
			{
				printf("Too small");
				scanf_s("%d", &num);
			}
			else
			{
				printf("little smaller");
				scanf_s("%d", &num);
			}
		}
	}
	printf("bingo");
	getchar();
	

}