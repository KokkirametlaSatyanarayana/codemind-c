#include<stdio.h>
#include<math.h>
int main()
{
     int num,sq;
     scanf("%d",&num);
     sq=sqrt(num);
     if(num%(sq*sq)==0)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}