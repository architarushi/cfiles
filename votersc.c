#include<stdio.h>
long int a[50000],n1,n2,n3,a1[50000],sum,i;
int main()
{
    sum=0;
    scanf("%ld %ld %ld",&n1,&n2,&n3);
    for(i=0;i<n1;i++)
    {
        scanf("%ld",&a1[i]);
        a[a1[i]]++;
    }
    fflush(stdin);
    for(i=0;i<n2;i++)
    {
        scanf("%ld",&a1[i]);
        a[a1[i]]++;
    }
    fflush(stdin);
    for(i=0;i<n3;i++)
    {
        scanf("%ld",&a1[i]);
        a[a1[i]]++;
    }
    for(i=1;i<50000;i++)
    {
        if(a[i]>1)
            sum++;
    }
    printf("%ld\n",sum);
    for(i=1;i<50000;i++)
        if(a[i]>1)
        printf("%ld\n",i);
    return 0;
}
