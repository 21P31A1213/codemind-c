#include<stdio.h>
int main()
{
    int n,i,a,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d",sum);
}