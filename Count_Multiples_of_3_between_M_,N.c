#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        if(c%3==0)
        {
           d=d+1;
        }
        //printf("%d",d);
    }
    printf("%d",d);
}