#include<stdio.h>
int main()
{
   int a,h,m,s;
   scanf("%d",&a);
   h=a/3600;
   m=a%3600;
   int ma=m/60;
   s=m%60;
   //int sa=s;
   printf("H:M:S-%d:%d:%d",h,ma,s);
}