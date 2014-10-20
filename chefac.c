#include<stdio.h>
unsigned long int a[100000],ans,n,r,s;
int t;
long long int i;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lu",&n);
        for(i=0;i<n;i++)
            scanf("%lu",&a[i]);
        for(i=1;i<n;i++)
        {
            r=i-1;
            s=a[i];
            while((r>=0)&&(s<a[r]))
            {
                a[r+1]=a[r];
                r--;
            }
            a[r+1]=s;
        }
        ans=0;
        if(n%2==0)
        {
            for(i=n-1;i>=1;i=i-2)
            ans+=a[i];
        }
        else
        {
            for(i=n-1;i>=0;i=i-2)
                ans+=a[i];
        }
        printf("%lu\n",ans);
    }
    return 0;
}
