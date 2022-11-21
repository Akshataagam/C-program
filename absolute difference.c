#include<stdio.h>
main()
{
	printf("%d",test(53));
	printf("\n %d",test(30));
	printf("\n %d",test(51));
}
int test (int n)
{
	const int x=51;
	if (n>x)
{
	return(x-n)*3;
	
	}	
	return x-n;
	
	
	}

