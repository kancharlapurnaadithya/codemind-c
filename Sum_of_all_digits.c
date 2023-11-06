#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        i=i+b;
        
    }
    printf("%d",i);
    
}