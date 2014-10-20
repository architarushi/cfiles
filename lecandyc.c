#include<stdio.h>
unsigned long int t,i,a[101],n,c,sum;
int main()
{
    scanf("%lu",&t);
    while(t--)
    {
        scanf("%lu %lu",&n,&c);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lu",&a[i]);
            sum+=a[i];
        }
        if(sum<=c)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
