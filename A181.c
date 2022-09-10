#include<stdio.h>
#include<conio.h>
int length(char []);
int main()
{
	char s[100];
	int len;
	gets(s);
	len=length(s);
	printf("Length of the string is %d",len);
	getch();
}

int length(char s[])
{
	int i;
	for(i=0;s[i];i++);
	return i;
}
