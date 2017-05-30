#include <stdio.h>

int convert(int number,int digit){
	long int result=0;
	int last;
	while(number!=0){
		last=number%digit;
		result=result*10+last;
		number=number/digit;
	}
	return result;
}
int main(){
	int number;
	printf("Please input a number to convert\n");
	scanf("%d",&number);
	printf("The number you input is %d\n",number);
	printf("The transformation result are as follows\n");
	for(int i=2;i<=16;i++){
		printf("%d = %ld <%d>\n",number,convert(number,i),i);
	}
	
}
