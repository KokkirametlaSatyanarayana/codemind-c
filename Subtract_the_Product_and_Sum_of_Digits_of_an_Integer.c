#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,temp;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        pro=pro*temp;
        n=n/10;
    }
    printf("%d",pro-sum);
}