#include<stdio.h>
int main()
{
	int a,b,reverse=0,m;
	scanf("%d",&a);
	m=a;
	while(a>0)
	{
	 	b=a%10;
	 	reverse=reverse*10+b;
	 	a=a/10;
	}
	if(m==reverse)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}