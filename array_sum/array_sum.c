#include <stdio.h>

int sum(int a[],int n){
	if(n==0) return 1;
	else{
		return a[n]+sum(a,n-1);
	}
}
int main(){
	int a[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int number=15;
	printf("%d",sum(a,number));
}
