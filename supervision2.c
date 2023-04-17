#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("file hendling.txt","r");
	
	if(p=NULL)
	{
		printf("File is not open");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
