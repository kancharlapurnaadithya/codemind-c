#include<stdio.h>
int main()
{
    float sa,hra,da;
    scanf("%f%f%f",&sa,&hra,&da);
    float pf=0.12*(sa);
    float gs=pf+sa+hra+da;
    printf("%.2f
%.2f
",pf,gs);
    
}