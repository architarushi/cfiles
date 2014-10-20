#include<stdio.h>
long int t,n,m,a[10005],k,i,pos;
int main()
{
    scanf("%ld",&t);
    while(t--)
    {
        for(i=0;i<n;i++)
            a[i]=0;
        scanf("%ld %ld",&n,&m);
        while(m--)
        {
                scanf("%ld",&pos);
                k=1;
                for(i=pos+1;i<n;i++)
                {
                    if(a[i]<k)
                    a[i]=k;
                    k++;
                }
                k=1;
                for(i=pos-1;i>=0;i--)
                {
                    if(a[i]<k)
                        a[i]=k;
                    k++;
                }
        }
        for(i=0;i<n-1;i++)
            printf("%ld ",a[i]);
            printf("%ld",a[i]);
        printf("\n");
    }
    return 0;
}
