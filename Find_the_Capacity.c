#include<stdio.h>
#include<math.h>
int main()
{
    int s,t,b,c,tmp;
    scanf("%d%d%d",&s,&t,&b);
    tmp=2*s*t*b*512;
    c=tmp/1024;
    printf("%dKB",c);
}