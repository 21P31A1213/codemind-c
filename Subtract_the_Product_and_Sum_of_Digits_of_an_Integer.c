#include<stdio.h>
int main()
{
    int a,b,c,sum=0,pro=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum+=b;
        pro*=b;
        a=a/10;
    }
    c=pro-sum;
    printf("%d",c);
}