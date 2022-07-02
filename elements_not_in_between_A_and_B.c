#include<stdio.h>
int main()
{
    int n,i,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>=a&&ar[i]<=b)
        {
            s++;
        }
        else
        {
            printf("%d ",ar[i]);
        }
    }
    if(s==n)
    {
        printf("-1");
    }
}