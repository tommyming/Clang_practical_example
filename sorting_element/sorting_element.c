#include <stdio.h>

int main(){
	int a[6]={8,4,0,2,9,1};
	printf("The array before is:\n");
	printf("8 4 0 2 9 1\n");
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			if(a[j]<a[i]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The element sorted:\n");
	for(int i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	
}
