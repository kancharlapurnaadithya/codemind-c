#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a-(b);
    b=a+(b);
    a=b-(a);
    printf("%d
%d
",a,b);
}