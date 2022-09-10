#include<stdio.h>
#include<conio.h>
void wordCount(char [],int);
int main()
{
	int i;
	char str[100];
	printf("Enter a string: ");
	fgets(str,100,stdin);
	
	for(i=0;str[i];i++);
	str[i-1]='\0';
	
	wordCount(str,100);
	getch();
}

void wordCount(char str[],int size)
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
	
	printf("Number of word/s is/are %d",count);
}
