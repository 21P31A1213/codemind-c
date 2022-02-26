#include<stdio.h>
int main()
{ 
    int a[3],b[3],i,n=0,m=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
        {
            if(a[i]>b[i])
            {
                n++;   
            }
            else if (a[i]<b[i])
            {
                m++;
            }
        }
    printf("%d %d",n,m);
    return 0;
}