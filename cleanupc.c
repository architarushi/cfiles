#include<stdio.h>
int n,m,a[1001],i,f,t,k,b;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
            a[i]=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d",&b);
            a[b]=-1;
        }
        f=1;
        for(i=1;i<=n;i++)
        {
           if(a[i]==0)
           {
               if(f==1)
                {
                    printf("%d ",i);
                    f=2;
                    a[i]=1;
                }
                else
                    f=1;
           }
        }
        printf("\n");
        for(i=2;i<=n;i++)
        {
            if(a[i]==0)
            {
                printf("%d ",i);
                a[i]=1;
            }
        }
        printf("\n");
    }
    return 0;
}
