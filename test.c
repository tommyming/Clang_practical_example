#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int twoSum(int* nums, int numsSize, int target) {
    int list[2];
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i]+nums[j]==target)
            {
                list[0]=i;
                list[1]=j;
                return list;
            }
            
        }
        
    }
    
    
}
int main(int argc, char const *argv[])
{
    int array[3],target;
    array[0]=7;
    array[1]=9;
    array[2]=2;
    twoSum(array,3,target)
}
