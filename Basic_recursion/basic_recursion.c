#include <stdio.h>
int PrintN(int n){
    if(!n) return 0;
    PrintN(n-1);
    printf("%d \n",n);
    return 0;
}
int main(int argc, char const *argv[])
{
    PrintN(20);
    return 0;
}
