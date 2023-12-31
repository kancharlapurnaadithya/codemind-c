#include<stdio.h>
int main()
{
    int a,b,p=0,q=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        p+=i;
        
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        q+=i;
    }
    if(p==b&& q==a)
    printf("Amicable");
    else
    printf("Not Amicable");
    
    
}