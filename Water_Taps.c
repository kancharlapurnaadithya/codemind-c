#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c=1.0/a;
    float d=1.0/b;
    float f=c+d;
    float g=1.0/f;
    printf("%.0f",g);
    
}