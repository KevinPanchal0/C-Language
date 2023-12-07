#include<stdio.h>
void main()
{
	FILE *file;
	FILE *ptr;

	char c;
	
	file=fopen("abc.txt","r");
	if(file == '\0')
	{
		printf("file not found");
	}
	else
	{
		printf("data read successfully\n");
		
	}
	
	c=fgetc(file);
	ptr=fopen("abcd.txt","w");
	
		printf("file found\n");
		while(c != EOF)
		{
			fputc(c,ptr);
			c=fgetc(file);	
		}
		printf("content copied\n");
		
	
	fclose(file);
}
