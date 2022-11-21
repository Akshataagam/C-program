//prime number
#include<stdio.h>
main()
{
	int num,i,result;
	printf("\nenter the number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			result++;
		}
	}
	if(result==0)
		{
			printf("%dnumber is prime number",num);
		}
		else
		{
			printf("%dnumber is not prime",num);
		}
}
