#include<stdio.h>
int main()
{
    int a,b,c,f=0;
    scanf("%d",&a);
    b=(a*a);
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        f=f+c;
    }
    if(f==a)
    {
       printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}