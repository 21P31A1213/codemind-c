#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=0,t=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2==0)
            {
                t++;
            }
            else
            {
                t=0;
            }
        }
    }
    if(t==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}