#include<stdio.h>
int main()
{
    float pf,gs,bs,da,hra;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=pf+bs+hra+da;
    printf("%.2f
",pf);
    printf("%.2f
",gs);
}