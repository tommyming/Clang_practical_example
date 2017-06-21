#include <stdio.h>
#define MAX 255

int selection_sort(int *R, int n) {
	int key = 0, temp;
	for (int i = 0; i < n; i++)
	{
		key = i;
		for (int j = i + 1; j < n; j++)
		{
			if (R[j] < R[key])
			{
				key = j;
			}
			if (key != i)
			{
				temp = R[i];
				R[i] = R[key];
				R[key] = temp;
			}
		}
	}
}
int main(int argc, char const *argv[])
{

	int number, R[255];
	puts("Please input the number\n");
	scanf("%d", &number);
	puts("Please input the elements\n");
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &R[i]);
	}
	selection_sort(R, number);
	puts("The sorted elements\n");
	for (int i = 0; i < number; i++)
	{
		printf("%d", R[i]);
	}
	return 0;
}
