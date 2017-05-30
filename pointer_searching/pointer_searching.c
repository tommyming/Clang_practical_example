#include <stdio.h>

int search(int *apt, int n, int key){
	for(int i=0;i<n;i++){
		if(*(apt+i)==key){
			return i;
		}
	}
} 

int main(){
	int a[100],counter=0,target;
	for(int i=90,j=0;i>=10;i=i-10,j++){
		a[j]=i;
		counter++;
	}
	for(int i=0,j=counter+1;i<9;i++,j++){
		a[j]=i+1;
		counter++;
	}
	puts("The elements of array a is \n");
	for(int i=0;i<counter;i++){
		printf("%d ",a[i]);
	}
	printf("The address of a[0] is %d \n",&a[0]);
	printf("Please input the key number\n");
	scanf("%d", &target );
	int result= search(a,counter,target);
	printf("The label number of the key : %d \n",result );
	printf("The point value is %d",&a[result]);
	
	
}
