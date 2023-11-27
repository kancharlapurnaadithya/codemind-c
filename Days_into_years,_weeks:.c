#include<stdio.h>
int main()
{
    int y,d,a;
    scanf("%d",&a);
    y=a/365;
    d=a%365;
    int da=d/7;
    printf("%d
%d
",y,da);
}