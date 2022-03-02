#include<stdio.h>
int main()
{
    int n,m,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(m>temp)
        {
            temp=m;
        }
        n=n/10;
    }
    printf("%d",temp);
}