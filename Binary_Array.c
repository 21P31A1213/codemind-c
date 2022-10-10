#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d=0;
    int s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]!=0 && ar[i]!=1)
        {
            s=1;
            break;
        }
    }
    if(s==0)
    printf("True");
    else
    printf("False");
}