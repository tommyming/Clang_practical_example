#include <stdio.h>

int main(){
    char string[100],new_string[100];
    char *p;
    printf("This is a typeset program\n");
    printf("Please input a character line\n");
    scanf("%s",string);
    for(p=string;p<string+100;p++){
        if(strcmp(p,' ')==0){
            for(int i=0;i<5;i++){
                strcpy(new_string+p+i,string+p+i);
                p++;
            }
        }
        //testing
        else{
            strcpy(new_string+p,string+p);
        }
    }
}