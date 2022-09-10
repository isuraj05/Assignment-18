#include<stdio.h>
#include<conio.h>
void lower(char []);
int main()
{
	char s[100];
	gets(s);
	lower(s);
	getch();
}

void lower(char s[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		    printf("%c",s[i]+32);
		else
		    printf("%c",s[i]);
	}
}
