#include<stdio.h>
int main()
{
	int marks[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter the value of marks for student%d:",i+1);
		scanf("%d",&marks[0]);
	}
	for(i=0;i<5;i++)
	{
		printf("enter the value of marks for student%d:is%d\n",i+1,marks[i]);
		
	}
}
