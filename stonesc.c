#include<stdio.h>
char s[101],j[101];
int a[123],i,t,sum;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
       for(i=0;i<123;i++)
        a[i]=0;
       scanf("%s",j);
       scanf("%s",s);
       for(i=0;j[i]!='\0';i++)
       {
           a[j[i]]++;
       }
       sum=0;
       for(i=0;s[i]!='\0';i++)
       {
           if(a[s[i]]>=1)
           sum++;
       }
       printf("%d\n",sum);
    }
    return 0;
}
