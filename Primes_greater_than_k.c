#include<stdio.h>
int main()
{
    int n,i,j,z;
    int s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&z);
    int c=0,l=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]>=z)
        {
            c=0;
            if(ar[i]==1)
            c=1;
            for(j=2;j<ar[i];j++)
            {
                if(ar[i]%j==0)
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}