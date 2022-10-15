#include<stdio.h>
int main()
{
    int n,s,s1=0,s2=0,t;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            s1=s1+1;
        }
        else if(arr[i]>t)
        {
            s2=s2+2;
        }
    }
    s=s1+s2;
    printf("%d",s);
    return 0;
}
