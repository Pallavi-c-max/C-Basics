#include<stdio.h>

int main()
{
    int a,b,mod;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    
    mod=a%b;
    
    printf("Mod=%d\n",mod);
    return 0;
}