#include<stdio.h>
#include<conio.h>
void alnum(char []);
int main()
{
	char s[100];
	gets(s);
	alnum(s);
	getch();
}

void alnum(char s[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			printf("It is an alphanumeric string");
			break;
		}	
	}
	if(s[i]=='\0')
		printf("It is not an alphanumeric string");
}
