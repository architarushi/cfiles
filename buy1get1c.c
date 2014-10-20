#include<stdio.h>
int a[123],i,sum,t;
char s[201];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%s",s);
        for(i=0;i<123;i++)
            a[i]=0;
        for(i=0;s[i]!='\0';i++)
            a[s[i]]++;
        for(i='A';i<='z';i++)
        {
            if(a[i]%2==0)
                sum+=a[i]/2;
            else
                sum+=(a[i]/2+1);
        }
        printf("%d\n",sum);
    }
    return 0;
}
