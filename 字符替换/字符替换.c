#include <stdio.h>
#define MAX 50

int rep(char *s, char *s1, char *s2){
    char *p;
    for(;*s;s++){
        for(p=s1;*p&&*p!=*s;p++);{
            if(*p){
                *s=*(p-s1+s2);
            }
        }
    }
    
}

// int rep(char *s, char *s1, char *s2){
//     char *p;
//     for(;*s;s++){
//         for(p=s1;*p&&*p!=*s;p++);
//         if(*p)*s=*(p-s1+s2);
//     }
// }

int main(){
    char s[MAX];
    char s1[MAX],s2[MAX];
    puts("Please input the string for s");
    scanf("%s",s);
    puts("Please intput the string for s1");
    scanf("%s",s1);
    puts("Please intput the string for s2");
    scanf("%s",s2);
    rep(s,s1,s2);
    puts("Please processed string is :");
    printf("%s\n",s);
    puts("\n Press any key to quit..");
    getchar();
}