#include<stdio.h>
main()
{
	int marks[4];
	printf("enter the value of marks for student1:");
	scanf("%d",&marks[0]);
	printf("enter the value of marks for student2:");
	scanf("%d",&marks[1]);
	printf("enter the value of marks for student3:");
	scanf("%d",&marks[2]);
	printf("enter the value of marks for student4:");
	scanf("%d",&marks[3]);
	printf("you have entered %d%d%d%d",marks[0],marks[1],marks[2],marks[3]);
}
