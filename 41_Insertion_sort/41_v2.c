#include <stdio.h>
int insertion(int *array,int n);
int main(){
    int array[255],number;
    puts("Please input the number\n");
    scanf("%d",&number);
    puts("Please input the elements");
    for(int i = 1; i <= number; i++)
    {
        scanf("%d",&array[i]);
    }
    puts("The number you have inputted\n");
    for(int i = 1; i <= number; i++)
    {
        printf("%d",array[i]);
    }
    puts("\n");
    insertion(array,number);
    puts("The number after sorting\n");
    for(int i = 1; i <= number; i++)
    {
        printf("%d",array[i]);
    }
    
}

int insertion(int *array,int n){
    int i,j;
    for(int i = 2; i <= n; i++)
    {
        if(array[i]<array[i-1])
        {
            array[0]=array[i];
            j=i-1;
            do
            {
                array[j+1]=array[j];
                j--;
            } while (array[0]<array[j]);
            array[j+1]=array[0];
        }
        
    }
    
}