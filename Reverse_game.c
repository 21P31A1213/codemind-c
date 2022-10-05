#include<stdio.h>
int main()
{
    int a[100],n,i,q,r,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        q=a[i];
        while(q)
        {
            r=q%10;
            s=s*10+r;
            q=q/10;
        }
        printf("%d ",s);
        s=0;
    }
}
