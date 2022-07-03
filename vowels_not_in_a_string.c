#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int j,d=0,l,a=0,e=0,i=0,o=0,u=0;
    l=strlen(s);
    for(j=0;j<l;j++)
    {
        if(s[j]=='a'||s[j]=='A')
        {
            a++;
        }
        if(s[j]=='e'||s[j]=='E')
        {
            e++;
        }
         if(s[j]=='i'||s[j]=='I')
        {
            i++;
        }
        if(s[j]=='o'||s[j]=='O')
        {
            o++;
        }
        if(s[j]=='u'||s[j]=='U')
        {
            u++;
        }
    }
    if(a==0)
    printf("a ");
    if(e==0)
    printf("e ");
    if(i==0)
    printf("i ");
    if(o==0)
    printf("o ");
    if(u==0)
    printf("u ");
    if(a>0&&e>0&&i>0&&o>0&&u>0)
    printf("0");
}