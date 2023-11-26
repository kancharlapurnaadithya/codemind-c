#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a/60;
    int c=a%60;
    printf("%d Hour(s) %d Minute(s)",b,c);
}