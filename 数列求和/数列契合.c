#include <stdio.h>

int main(){
	int n;
	long int sum=0,temp;
	printf("Please input a number" );
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		temp=0;
		for (int j = 0; j < i; ++j)
		{
			temp+=j;
		}
		sum+=temp;
	}
	printf("The sum of sequence %d is %ld \n",n,sum );
}