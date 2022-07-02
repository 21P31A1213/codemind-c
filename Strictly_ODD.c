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
        if(a[i]%2==1)
        {
            if(i%2==1)
            {
                p++;
            }
            j++;
        }
        else if(a[i]%2==1)
        {
            t++;
        }
    }
    if(t==0&&p==j)
    printf("True");
    else
    printf("False");
}