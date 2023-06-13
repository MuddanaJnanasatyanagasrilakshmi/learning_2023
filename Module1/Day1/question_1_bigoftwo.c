#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	if (a>b)
	{
		printf("a is big");
	}
	else
	{
		printf("b is big");
	}
}

