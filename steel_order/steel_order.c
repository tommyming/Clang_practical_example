#include <stdio.h>

int main(){
	int total,number,order[100],index=1;
	printf("Please enter total length of the steel: \n");
	scanf("%d",&total);
	printf("Please enter number of orders:\n");
	scanf("%d",&number);
	printf("Please enter the orders\n");
	for(int i=0;i<number;i++){
		scanf("%d",&order[i]);
		if(order[i]<order[i+1]){
			index++;
		}
	}
	printf("order %d length = %d",index,order[index]);
	
}
