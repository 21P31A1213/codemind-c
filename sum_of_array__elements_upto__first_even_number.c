#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==1)
        {
            sum=sum+ar[i];
        }
        else
        break;
    }
    printf("%d",sum);
}