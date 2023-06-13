#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks\n");
	scanf("%d",&marks);
	if (marks>=90 && marks<=100)
	{
		printf("A grade");
	}
	else if (marks>=75 && marks<=89)
	{
		printf("B grade");
	}
	else if (marks>=60 && marks<=74)
	{
		printf("C grade");
	}
	else if (marks>=50 && marks<=59)
	{
		printf("D grade");
	}
	else if (marks>=0 && marks<=49)
	{
		printf("F grade");
	}
	return 0;
}
