#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1 || i==j)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}