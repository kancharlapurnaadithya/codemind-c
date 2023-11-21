#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float ra=1.0/x;
    float rb=1.0/y;
    float cb=ra+rb;
    float tt=1.0/cb;
    printf("%.0f",tt);
}