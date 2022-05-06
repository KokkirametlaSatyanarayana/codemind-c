#include<stdio.h>
int main()
{
    long long int x,m;
    scanf("%lld",&x);
    if(x>0)
    {
        printf("%lld",x/10);
    }
   else if(x<0 &&  x%10==0)
   {
        printf("%lld",x/10);
   }
   else if(x<0)
   {
       m=(x/10)-1;
        printf("%lld",m);
   }
}