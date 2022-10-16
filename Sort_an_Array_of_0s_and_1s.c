#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n],i,ar[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ar[j++]=arr[i];
    }
    for(i=0;i<n-i-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
}


