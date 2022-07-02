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
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==1)
        {
            c[d]=ar[i];
            d++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            c[d]=ar[i];
            d++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}