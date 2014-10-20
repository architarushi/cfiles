#include<stdio.h>
long long int t,g,i,j,k,n,q;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&g);
        while(g--)
        {
            scanf("%lld %lld %lld",&i,&n,&q);
            if(n%2==0)
            printf("%lld\n",n/2);
            else
            {
                if(i==q)
                printf("%lld\n",n/2);
                else
                printf("%lld\n",(n/2+1));
            }
        }
    }
    return 0;
}
