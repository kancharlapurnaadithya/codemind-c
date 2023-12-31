#include<stdio.h>
int main()
{
    int n,last,first;
   // printf("enter a,number");
    scanf("%d",&n);
    last=n%10;
    while(n!=0)
    {
        first=n;
        n=n/10;
    }
    printf("%d",first+last);
}