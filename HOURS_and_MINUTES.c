#include<stdio.h>
int main()
{
    int m,s,h;
    scanf("%d",&s);
    h=s/60;
    m=s%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}