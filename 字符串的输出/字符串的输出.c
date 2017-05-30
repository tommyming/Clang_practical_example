#include <stdio.h>
int main()
{
	char c1,c2,c3;
	printf("Please input chars to c1,c2,c3:\n");
	scanf("%c %c %c",&c1,&c2,&c3);
	printf("%s\n%c\n\t%c %c\n %c%c\t\b%c\n","The output is:",c1,c2,c3,c1,c2,c3);
}