#include<stdio.h>
int main()
{
    int n,a=0,b=1,i=1,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while(i<n-1)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",b);
        i++;
    }
    
}