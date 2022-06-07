#include<stdio.h>
int main()
{
    char str[100],i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
           count++;
        }
    }
     printf("%d",count);
}