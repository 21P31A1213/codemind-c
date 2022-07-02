#include<stdio.h>
int main()
{
    int i,n,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int ar[n],c[n],ze[n],e=0,d=0;
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
        else
        {
            ze[e]=ar[i];
            e++;
        }
    }
    int min=ze[0];
    for(i=0;i<e;i++)
    {
        if(ze[i]<min)
        {
            min=ze[i];
        }
    }
    if(e==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}