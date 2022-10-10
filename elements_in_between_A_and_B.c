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
    if(d>0)
    {
        for(i=0;i<d;i++)
        {
            printf("%d ",c[i]);
        }
    }
    else
    {
        printf("-1");
    }
}
