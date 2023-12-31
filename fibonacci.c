#include<stdio.h>
int main()
{
    int a,b=0,c=1,i,next;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      printf("%d ",b);
      next=b+c;
      b=c;
      c=next;
    }
}