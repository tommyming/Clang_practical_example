#include <stdio.h>

int main(){
	int a[3];
	printf("Please input three variables\n");
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(*(a+i)>*(a+j)){
				int temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	
}
