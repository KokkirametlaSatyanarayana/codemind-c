#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,z;
    scanf("%d%d%d",&x,&y,&n);
    z=pow(x,y);
    printf("%d",z%n);
}