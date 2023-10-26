#include<stdio.h>
int main()
{
    int s,h,m,rs;
    scanf("%d",&s);
    h=(s)/(60*60);
    rs=(s)%(60*60);
    m=rs/60;
    rs=rs%60;
    printf("H:M:S-%d:%d:%d",h,m,rs);
    
    
}