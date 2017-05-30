
#include <stdio.h>

int main()
{
	int order, min, max;
	int a[100][100];
	printf("Please input the rder of the matrix:\n");
	scanf_s("%d", &order);
	printf("Please input the element of the matrix\n");
	printf("from a[0][0] to a[%d][%d]\n", order - 1, order - 1);
	for (int i = 0; i < order; i++)
	{
		for (int j = 0; j < order; j++)
		{
			a[i][j] = getchar();
		}
	}
	int column, row;
	for (min = a[0][0] , row = 0; row < order; row++)
	{
		for (max = a[row][0] , column = 1; column < order; column++)
		{
			if (max < a[row][column])
			{
				max = a[row][column];
			}
			if (min > max)
			{
				min = max;
			}
		}
	}
	printf("The min of max number is %d\n", min);


	for (max = a[0][0] , row = 0; row < order; row++)
	{
		for (min = a[row][0] , column = 1; column < order; column++)
		{
			if (min > a[row][column])
			{
				min = a[row][column];
			}
			if (max < min)
			{
				max = min;
			}
		}
	}
	printf("The max of min number is %d\n", max);
	getchar();
}
