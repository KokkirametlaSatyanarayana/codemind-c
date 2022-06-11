#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=1,sum=0,temp,count=0,x;
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
          if(arr[i]==arr1[j])
          {
              count++;
          }
      }
      if(count==1)
      {
          printf("%d ",arr[i]);
          sum++;
      }
      count=0;
    }
    if(sum==0)
    {
        printf("-1");
    }
}