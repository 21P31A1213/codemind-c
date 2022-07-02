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
        s=s+ar[i];
    }
    s=s/n;
    for(i=0;i<n;i++)
    {
        if(ar[i]>=s)
        p++;
    }
    printf("%d",p);
}