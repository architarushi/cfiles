#include<stdio.h>
int t;
unsigned long int n;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lu",&n);
        if(n<=2)
            printf("%lu\n",n);
        else
            printf("%lu\n",(n/2)+1);
    }
    return 0;
}
