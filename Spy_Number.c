#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,i,f=1;
    scanf("%d",&a);
    while(a!=0)
   {
       b=a%10;
    a=a/10;
    c=(c+b);
    f=(f*b);
       
   }//printf("%d",f);
    if(c==f)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}