#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=(b+(c*2));
    if(d>=a)
    printf("Qualify");
    else 
    printf("Not Qualify");
}