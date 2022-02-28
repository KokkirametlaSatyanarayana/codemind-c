#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    x=n%10;
    y=(n/10)%10;
    z=n/10;
    if(x%2==0 && y%2==0 && z%2==0)
    {
        printf("Even");
    }
    else if(x%2!=0 && y%2!=0 && z%2!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}