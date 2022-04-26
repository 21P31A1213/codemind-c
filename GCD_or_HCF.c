#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }
    for(i=b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}