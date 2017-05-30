#include <stdio.h>

int main()
{
	int temp=0;
	printf("\t \t \tThe formula table\r\n" );
	printf("\t \t \t  ");
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d ",i );
	}
	printf("\n");
	for (int i = 1; i < 10; ++i)
	{
		printf("\t \t \t%d ",i );
		for (int j = 1; j < 10; ++j)
		{
			temp=i*j;
			printf("%d ",temp);
		}
		printf("\n");
	}
	return 0;
}