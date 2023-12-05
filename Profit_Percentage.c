#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=b-a;
    float d=(c*100.0)/a;
    printf("%.2f",d);
}