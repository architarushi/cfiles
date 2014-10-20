#include<stdio.h>
int i,j,n,k,a[1005],b[2000],cnt,sum;
int main()
{
    {
        sum=cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        i=0;
        while(cnt<n)
        {
            if(a[i]==0)
            {
                while((a[i]==0)&&(i<n))
                    i++;
            }
            {
                while(a[i]!=0)
                {
                    b[k++]=i+1;
                    j=a[i];
                    a[i]=0;
                    i=j-1;
                    cnt++;
                }
                b[k++]=i+1;
                sum++;
            }
        }
        printf("%d\n",sum);
        i=0;
        while(i<k)
        {
            j=b[i];
            printf("%d ",j);
            i++;
            while(b[i]!=j)
                printf("%d ",b[i++]);
            printf("%d",j);
            i++;
            printf("\n");
        }
    }
    return 0;
}
