#include<stdio.h>
int t,wp[30],p[30],s1=0,s2=0,i,j,a,b,n;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&wp[i]);
        for(i=0;i<n;i++)
            scanf("%d",&p[i]);
        for(i=1;i<n;i++)
        {
           a=i-1;b=wp[i];
           while((a>=0)&&(b<wp[a]))
            {
                wp[a+1]=wp[a];
                a--;
            }
           wp[a+1]=b;
        }
        for(i=1;i<n;i++)
        {
           a=i-1;b=p[i];
           while((a>=0)&&(b<p[a]))
            {
                p[a+1]=p[a];
                a--;
            }
           p[a+1]=b;
        }
        a=0;
        j=n-1;
        for(i=n-1;i>=0;i--)
        {
            if(wp[i]<=p[j])
            {
                a=a+1;
                j--;
            }
        }
        printf("%d\n",a);
    }

    return 0;
}
