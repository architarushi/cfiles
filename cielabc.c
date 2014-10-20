#include<stdio.h>
int a,b,d;
int main()
{
    scanf("%d %d",&a,&b);
    d=a-b;
    if(d%10==9)
        d=d-1;
    else
        d=d+1;
    printf("%d",d);
    return 0;
}
