#include<stdio.h>
int main()
{
    int a,b,c,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        c=a%10;
        a=a/10;
        //s=s*10+c;
        printf("%d",c);
    }
}