#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=1,max,min=0,temp,count=0,x;
    scanf("%d",&n);
    int arr[n],i,arr1[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[j++]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         {
             if(i!=j && arr[i]>arr[j])
             {
                 count++;
             }
         }
         printf("%d ",count);
         count=0;
    }
}