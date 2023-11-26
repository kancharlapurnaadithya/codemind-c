#include<stdio.h>
int main()
{
    int n1,n2,h;
    scanf("%d%d%d",&n1,&n2,&h);
    float t=(h*(n1+n2))/2.0;
    printf("%.4f",t);
}