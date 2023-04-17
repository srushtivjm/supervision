#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("file hendling.txt","a");
	if(p==NULL)
	{
		printf("file not open.");
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
	printf("--------------------------------------\n");
	p=fopen("file hendling.txt","r");
	if(p==NULL)
	{
		printf("file is open.");
	}
	else
	{
		while (fgets(data,50,p)!=NULL)
        {
        	printf("%s",data);
		}
	}
	fclose(p);
}
