#include<stdio.h>
int main()
{
    int x,y,k,c=0,i;
    scanf("%d %d %d",&x,&y,&k);
    for(i=x;i<=y;i++)
    {
        if(i%k==0)
        c++;
    }
    printf("%d",c);
    return 0;
}