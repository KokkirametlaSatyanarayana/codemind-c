#include<stdio.h>
int main()
{
    int size,flag=0;
    scanf("%d",&size);
    int i,a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0 && i%2!=0)
        {
            flag=1;
        }
        else if(a[i]%2!=0 && i%2==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}