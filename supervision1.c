#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p=fopen("file hendling.txt","w");
	if(p==NULL)
	{
		printf("File is not open.");
	}
	else
	{
		printf("Enter data=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data entered successfully.");
	}
	fclose(p);
}
