#include<stdio.h>
int main()
{
    int n,a=0,b=1,count=0,c;
    scanf("%d",&n);
    while(b>0)
    {
        c=a+b;
        a=b;
        b=c;
        if(b==n)
        {
            printf("True");
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("False");
    }
    
}