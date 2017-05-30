#include <stdio.h>

int main()
{
	printf("Please input x and y: specified\r\n" );
	float x,y,result;
	result=0;
	scanf("%f\r\n",&x);
	scanf("%f",&y);
	// actually we can write scanf("%f %f",&x,&y);because the return does not 
	// affect the input
	result=(x>y)?x:y;
	printf("The largest number of <%f and %f> is %f",x,y,result);
	return 0;
}