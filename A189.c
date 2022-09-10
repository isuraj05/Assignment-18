#include<stdio.h>
#include<conio.h>
#include<string.h>

void revWordWise(char []);
int main()
{	
	char str[100];
	printf("Enter a string: ");
	fgets(str,100,stdin);
	str[strlen(str)-1]='\0';
	
	revWordWise(str);
	getch();
}

void revWordWise(char str[])
{
	int i,count=0;
	
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
			continue;
		else
		{
			if(str[i+1]==' ' || str[i+1]=='\0')
			count++;
		}
	}
	
	char *revs,*word[count];
	revs=strtok(str," ");
	
	for(i=0;i<=count;i++)
	{
		if(revs!=NULL)
		{
			word[i]=revs;
			revs=strtok(NULL," ");	
		}
	}
	
	for(i=0;i<count;i++)
		printf("%s ",word[count-i-1]);
}
