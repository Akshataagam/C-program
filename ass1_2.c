#include<stdio.h>
main()
{
	char ch; 
	printf("enter the alphabet=");
	scanf("%c",&ch);
	if(ch=='a' || ch=='u' || ch=='i' ||ch=='o'||ch=='e')
	{
		printf("\n the given alphabet is vowel");
	}
	else
	{
		printf("\n the given alphabet is consonant");
	}
}
