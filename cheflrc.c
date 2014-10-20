#include<stdio.h>
int i=0,t=0;
char s[100001];
unsigned long int p=1,mod=1000000007;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        p=1;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(i%2==0)
            {
                if(s[i]=='l')
                {
                    p=p*2;
                    p=p%mod;
                }
                if(s[i]=='r')
                {
                    p=p*2+2;
                    p=p%mod;
                }
            }
            else
            {
                if(s[i]=='l')
                {
                    p=p*2-1;
                    p=p%mod;
                }
                if(s[i]=='r')
                {
                    p=p*2+1;
                    p=p%mod;
                }
            }
        }
        printf("%lu\n",p);
    }
    return 0;
}
