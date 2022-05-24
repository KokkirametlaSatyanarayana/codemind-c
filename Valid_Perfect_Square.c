#include<stdio.h>
#include<math.h>
int perfect(int n)
{
    int m;
    m=sqrt(n);
    if(n==m*m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
   int n,temp,i,m,sum=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(perfect(arr[i])==1)
      {
          printf("True
");
      }
      else
      {
          printf("False
");
      }
   }
}