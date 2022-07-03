#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0;
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
        if(a[i]==' '||i==l-1)
        {
            printf("%d ",c);
            c=0;
        }
    }
}