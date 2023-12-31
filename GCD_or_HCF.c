#include<stdio.h>
int main()
{
    int a,b,max,i,gcd;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    for(i=1;i<=max;i++)
    {
        if(a%i==0 &&b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}