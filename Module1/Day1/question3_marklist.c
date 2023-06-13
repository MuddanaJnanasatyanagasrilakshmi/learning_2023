#include<stdio.h>
int main()
{
	int r_no,name[100],math,phy,chem,total;
	float avg;
	printf("Enter name of student:");
	scanf("%s",name);
	printf("Enter roll number of student:");
	scanf("%d",&r_no);
	printf("Enter marks of maths , physics & chemistry:");
	scanf("%d%d%d",&math,&phy,&chem);
	printf("total marks for %s is %d",name,(math+chem+phy));
	avg=(math+phy+chem)/3;
	printf("\npercentage obtained is %.1f",avg);
	return 0;
}
