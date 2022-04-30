#include<stdio.h>
int main()
{
    int size,flag=0,sum=0,x;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<size;i++)
   {
       if(arr[size-i-1]%2==0 && arr[size-i-3]%2==0)
       {
           sum=sum+1;
       }
   }
   printf("%d",sum);
}