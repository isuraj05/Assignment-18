#include<stdio.h>
#include<conio.h>
void upper(char []);
int main()
{
	char s[100];
	gets(s);
	upper(s);
	getch();
}

void upper(char s[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		    printf("%c",s[i]-32);
		else
		    printf("%c",s[i]);
	}
}
