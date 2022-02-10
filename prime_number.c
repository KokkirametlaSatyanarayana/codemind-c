#include<stdio.h>
int main()
{
    int a,b,flag=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
            flag++;
        }
    }
    
     if(flag==2)
     {
         
         printf("prime");
     }
     else
     {
         printf("not a prime");
     }
    
 
}