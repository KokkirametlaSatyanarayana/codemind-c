#include<stdio.h>
int main()
{
    int size,flag=0,count=0;
    scanf("%d",&size);
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0 && i%2!=0)
        {
            flag=1;
        }
        else if(arr[i]%2!=0 && i%2==0)
        {
            count++;
        }
     }
    if(flag==1 && count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}