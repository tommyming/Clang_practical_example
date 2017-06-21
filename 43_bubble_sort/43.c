#include <stdio.h>
#define MAX 255
int R[MAX];
int bubble_sort(int n){
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >=0; j--)
        {
            if(R[j-1]>R[j])
            {
                temp=R[j];
                R[j]=R[j-1];
                R[j-1]=temp;
            }
            
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int number;
    puts("Please input the number\n");
    scanf("%d",&number);
    puts("Please input the elements\n");
    for(int i = 0; i < number; i++)
    {
        scanf("%d",&R[i]);
    }
    bubble_sort(number);
    puts("The sorted elements\n");
    for(int i = 0; i < number; i++)
    {
        printf("%4d",R[i]);
    }
    return 0;
}
