//enter string count no of digits and alphabet
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[30];
	int alpha,digit,other,i;
	alpha=digit=other=i=0;
	printf("enter the string=");
	gets(s);
	while(s[i]!='\0')
	{
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			alpha++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			digit++;
		}
		else
		{
			other++;
		}
		i++;
		
	}
	printf("Alphabets=%d\n",alpha);
	printf("Digits=%d\n",digit);
	printf("\n OTHER=%d",other);
}
