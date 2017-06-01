#include <stdio.h>
#include <string.h>

int judge(char *s){
    int flag=0;
    for(int i = 0,j=strlen(s); i < strlen(s),j>0; i++,j--)
    {
        if(strcmp(s[i],s[j])!=0)
        {
            flag=1;
        }
    }
    return flag;
    
}
int main()
{
    char string[20];
    printf("Please input the string you want to judge");
    
    while(1)
    {
        scanf("%s",string);
        if(strcmp(string,'^')==0){
            break;
        }
        else{
            if(judge(&string)==0)
            {
                printf("It is a recursive word");
            }
            else 
            {
                printf("It is NOT a recursive word");
            }
        }
    }
    
    return 0;
}
