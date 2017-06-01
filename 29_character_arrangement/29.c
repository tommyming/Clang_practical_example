#include <stdio.h>
#define N 20
char w[N];
char perm(int n, char *s)
{
	char s1[N];
	int i;
	if(n<1)
		printf("%s\n",w); 
	else
	{
		strcpy(s1,s);	
		for(i=0;*(s1+i);i++)	
		{
			*(w+n-1)=*(s1+i);
			*(s1+i)=*s1;
			*s1=*(w+n-1);
			perm(n-1,s1+1);	
		}
	}
}
int main(){
    char string[100];
    int length;
    printf("This is a char permutation\n");
    printf("Please input a string\n");
    scanf("%s",string);
    printf("Please input the character length\n");
    scanf("%d",&length);
    printf("The pemutated chars\n");
    perm(length,string);

}