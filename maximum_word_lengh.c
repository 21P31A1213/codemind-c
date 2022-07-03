#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i,c=0,d=0,k=0;
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            c++;
            d++;
        }
        else
        {
            d++;
            if(k<c)
            {
                k=c;
            }
            c=0;
        }
        if(d==l)
        {
            if(k<c)
            {
                k=c;
            }
        }
    }
    if(c==l)
    printf("%d",l);
    else
    printf("%d",k);
}