#include<stdio.h>
int main()
{
    int i,n,a[100],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int d,c=0;
        while(a[i])
        {
            d=a[i]/10;
            a[i]=a[i]/10;
            c++;
        }
        if(c%2==0)
        {
            p++;
        }
    }
    printf("%d",p);
}