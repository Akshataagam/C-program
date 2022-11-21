//file copy
#include<stdio.h>
main()
{
	FILE *fp1,*fp2;
	char ch;
	
	fp1=fopen("good.c","r");
	fp2=fopen("better.c","w");
	
	while((ch=getc(fp1))!=EOF)
	putc(ch,fp2);
	
	fclose(fp1);
	fclose(fp2);
}
