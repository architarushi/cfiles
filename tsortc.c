#include<stdio.h>
unsigned long int a[1000001],b[1000001],t,i,j;
int main()
{
    scanf("%lu",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lu",&a[i]);
    }
    //for(i=0;i<10000001;i++)
       // b[i]=0;

    for(i=0;i<t;i++)
        b[a[i]]++;

    for(i=0;i<1000001;i++)
    {
        while(b[i]--)
            printf("%lu\n",i);
    }
    return 0;
}
