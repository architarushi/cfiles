#include<stdio.h>
int a[1000],i,v,s,x,pos,t,n;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {
            v=i-1;x=a[i];
            while((v>=0)&&(x<a[v]))
            {
                a[v+1]=a[v];
                v--;
            }
            a[v+1]=x;
        }
        v=a[0];
        x=1;
        for(i=0;i<n;i++)
        {
            pos=i;s=0;
            while(a[pos]==a[i])
            {
                s++;
                i++;
            }
            i--;
            if(s>x)
            {
                x=s;
                v=a[pos];
            }
        }
        printf("%d %d\n",v,x);
    }
    return 0;
}
