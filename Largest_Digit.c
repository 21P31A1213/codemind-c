#include<stdio.h>
int main()
{
    int num,largest=0,remainder;
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        if(remainder>largest)
        {
            largest=remainder;
        }
        num=num/10;
    }
    printf("%d",largest);
}