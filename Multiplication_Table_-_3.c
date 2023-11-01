#include<stdio.h>
int main()
{
    int nu,s,a,e;
    scanf("%d%d%d",&nu,&s,&e);
    for(a=s;a<=e;a++)
    {
        printf("%d x %d = %d
",nu,a,nu*a);
    }
}