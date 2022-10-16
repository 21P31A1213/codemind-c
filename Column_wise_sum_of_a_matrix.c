#include<stdio.h>
int main()
{
    int i,j,m,n,arr[100][100],s=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            s=s+arr[j][i];
        }
        printf("%d ",s);
    }
}