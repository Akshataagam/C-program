#include<stdio.h>
main()
{
	int mul[10],i;
	for(i=0;i<10;i++)
	{
		mul[i]=5*(i+1);
	}
	for(i=0;i<10;i++)
	{
		printf("5x%d=%d\n",i+1,mul[i]);
	}
}
