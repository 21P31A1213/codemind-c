#include<stdio.h>
int main()
{
    int l,b,w,c,ll,bl,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ll=l+2*w;
    bl=b+2*w;
    f=((ll*bl)-(l*b))*c;
    if(ll<=0||bl<=0)
    printf("Impossible");
    else
    printf("%d",f);
}