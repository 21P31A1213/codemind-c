#include<stdio.h>
int main()
{
    int n,i,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int ar[n],c[n],d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>=a&&ar[i]<=b)
        {
            c[d]=ar[i];
            d++;
        }
    }
    int min=c[0];
    for(i=0;i<n;i++)
    {
        if(c[i]<min)
        {
            min=c[i];
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}