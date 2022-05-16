#include<stdio.h>
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
        count=0;
        while(arr[i]>0)
        {
            arr[i]=arr[i]/10;
            count++;
        }
        if(count%2==0)
        {
            sum++;
        }
    }
    printf("%d",sum);
}