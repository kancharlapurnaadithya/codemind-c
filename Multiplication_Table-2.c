#include<stdio.h>
int main()
{
    int a,i,num;
    scanf("%d%d",&num,&a);
    for(i=1;i<=a;i++)
    {
        printf("%d x %d = %d
",num,i,num*i);
    }
}