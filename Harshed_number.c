#include<stdio.h>
int main()
{
    int s=0,r=0,n,num;
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    if(n%s==0)
    printf("True");
    else
    printf("False");
    return 0;
}