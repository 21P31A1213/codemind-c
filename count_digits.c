#include<stdio.h>
int main()
{
    int i,j,n,c=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        j=a[i];
        if(j==0)
        {
            c=1;
        }
        else
        {
            while(j)
            {
                j=j/10;
                c++;
            }
        }
        printf("%d ",c);
    }
}