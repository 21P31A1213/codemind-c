#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        t++;
    }
    if(n==t)
    printf("True");
    else
    printf("False");
}