#include<stdio.h>
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(ar[i]<ar[i+1])
            {
                c++;
            }
            else
            {
                break;
            }
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}