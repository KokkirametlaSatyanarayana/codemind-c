#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int a,i=1,s=0,count=0,l=0,x;
    scanf("%d",&a);
    while(i<=a)
    {
        scanf("%d",&x);
        i+=1;
        count=0;
        l=0;
        while(count==0)
        {
            l+=1;
            if(prime(x))
            {
                printf("%d
",x);
                break;
            }
            if(prime(x-l) && prime(x+l))
            {
                printf("%d
",x-l);
                break;
            }
            if(prime(x-l))
            {
                printf("%d
",x-l);
                break;
            }
            if(prime(x+l))
            {
                printf("%d
",x+l);
                break;
            }
        }
    }
}