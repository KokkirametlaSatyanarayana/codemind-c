#include<stdio.h>
int main()
{
    int n,m,sum=0,temp;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}