#include <stdio.h>

int insertion_sort(*array,total){
    for(int i = 0; i < count; i++)
    {
        int n=array[i];
        for(int j = i-1; j >=0,list[j]>n; --j)
        {
            array[j+1]=array[j];
        }
        array[j+1]=n;
        
    }
    
}
int main()
{
    int total,array[100];
    printf("Please input the total number\n");
    scanf("%d",&total);
    printf("Please input the element\n");
    for(int i = 0; i < total; i++)
    {
        scanf("%d",array[i]);
    }
    printf("The sequence you entered\n");
    for(int i = 0; i < total; i++)
    {
        printf("%d",array[i]);
    }
    
    return 0;
}
