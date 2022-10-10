#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,m,c=0,d=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int p=a[i];
        c=0;
        if(p==0)
        c=1;
        while(p)
        {
            p=p/10;
            c++;
        }
        if(c==m)
        {
            d++;
        }
    }
    printf("%d",d);
    
}