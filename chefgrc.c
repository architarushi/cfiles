#include<stdio.h>
long int i,ma,t,n,a[150],m,d,mi;
int main()
{
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&m);
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        ma=a[0];mi=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>ma)
                ma=a[i];
            if(a[i]<mi)
                mi=a[i];
        }
        d=0;
        if(mi!=ma)
        {
            for(i=0;i<n;i++)
            {
            d+=ma-a[i];
            }
            if(m==d)
                printf("Yes\n");
            else
            {
                if((d-m)%n==0)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
        else
        {
            if(m%n==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
