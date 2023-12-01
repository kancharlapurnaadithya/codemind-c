#include<stdio.h>
#include<math.h>
int main()
{
 float p,r,t,total;
    scanf("%f%f%f",&p,&r,&t);
    total=p*(pow(1+r/100,t)-1);
    printf("%.2f",total);
    
}