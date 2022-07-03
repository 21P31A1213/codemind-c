#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,j,c=1,d=0,l,a[100];
    l=strlen(s);
    a[0]=-1;
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            a[c]=i;
            c++;
        }
    }
    for(i=0;i<l;i++)
    {
        if(s[i]==' '||i==l-1)
        {
            for(j=i;j>a[d];j--)
            {
                if(s[j]!=' ')
                printf("%c",s[j]);
            }
            d++;
            printf(" ");
        }
    }
}