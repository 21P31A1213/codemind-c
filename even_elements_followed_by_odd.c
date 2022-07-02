#include<stdio.h>
int main()
{
    int n,i,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int ar[n*2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        printf("%d ",ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==1)
        printf("%d ",ar[i]);
    }
}