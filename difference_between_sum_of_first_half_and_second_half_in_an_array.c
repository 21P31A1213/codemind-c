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
    int s1=0,s2=0;
    for(i=0;i<n/2;i++)
    {
        s1=s1+ar[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2=s2+ar[i];
    }
    if(s1>s2)
    printf("%d",s1-s2);
    else
    printf("%d",s2-s1);
}