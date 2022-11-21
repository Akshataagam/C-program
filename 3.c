//string reverse without using library function
#include<stdio.h>
#include<string.h>
main()
{
	int i,len;
	char a[20];
	printf("\n enter a=");
	gets(a);
	len=strlen(a);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
