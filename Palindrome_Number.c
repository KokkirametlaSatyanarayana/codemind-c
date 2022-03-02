#include<stdio.h>
int main()
{
    int size,m,rev=0,temp;
    scanf("%d",&size);
    int i,a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<size;i++)
      {
          m=a[i],rev=0;
          while(a[i]>0)
       {
        temp=a[i]%10;
        rev=rev*10+temp;
        a[i]=a[i]/10;
       }
         if(rev==m)
           {
               printf("True");
           }
         else
           {
                printf("False");
           }
           printf("
");
      }
}