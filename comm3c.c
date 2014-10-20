#include<stdio.h>
#include<math.h>
int t,cx,cy,hx,hy,sx,sy;
float r,d1,d2,d3;
float distance(int a,int b,int c,int d)
{
    float w,w1,w2,w3;
    w1=(a-c)*(a-c);
    w2=(b-d)*(b-d);
    w3=w1+w2;
    w=sqrt(w3);
    return w;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f",&r);
        scanf("%d %d",&cx,&cy);
        scanf("%d %d",&hx,&hy);
        scanf("%d %d",&sx,&sy);
        d1=distance(cx,cy,hx,hy);
        d2=distance(cx,cy,sx,sy);
        d3=distance(hx,hy,sx,sy);
        if(((d1<=r)&&(d2<=r))||((d1<=r)&&(d3<=r))||((d2<=r)&&(d3<=r)))
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
