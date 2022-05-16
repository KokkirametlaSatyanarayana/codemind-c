#include<stdio.h>
#include<math.h>
int main()
{
    int size,temp,count=0,sum=0,m,sum1=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        m=sqrt(arr[i]);
        if(arr[i]==m*m)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}