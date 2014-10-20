#include<stdio.h>
#include<string.h>
long int n,sum=0,i,w,x,y,z;
char s[10001];
int main()
{
    scanf("%ld",&n);
    sum=0;
    while(n--)
    {
        w=x=y=z=0;
        gets(s);
        for(i=strlen(s)-1;s[i]!=' ';i--)
        {
            if(s[i]=='8')
                w++;
            else if(s[i]=='5')
                x++;
            else if(s[i]=='3')
                y++;
            else if((s[i]>='0')&&(s[i]<='9'))
                {z++;break;}
        }
            if((w>=x)&&(x>=y)&&(z==0))
            sum++;
    }
    printf("%ld",sum);
    return 0;
}
