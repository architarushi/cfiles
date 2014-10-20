#include<stdio.h>
unsigned long int n,k,x,a;
int main()
{
    scanf("%lu %lu %lu",&a,&n,&k);
    while(k--)
    {
        x=a%(n+1);
        printf("%lu ",x);
        a=a/(n+1);
    }
    return 0;
}
