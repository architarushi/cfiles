#include<stdio.h>
long int s=0,t,n;
int main()
{
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        s=0;
            s=(n*(n+1))/2;
            s=s+n;
        printf("%ld\n",s);
    }
    return 0;
}
