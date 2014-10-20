#include<stdio.h>
#define mod 1000000007
int t,n,ans;
int power(int a,int b)
{
    long long int x=1,y=a;
    while(b>0)
    {
        if(b%2==1)
            x=(x*y)%mod;
        y=(y*y)%mod;
        b=b/2;
    }
    return x%mod;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans=(power(2,n)-1);
        ans=ans%mod;
        printf("%d\n",ans);
    }
    return 0;
}
