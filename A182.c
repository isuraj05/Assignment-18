#include<stdio.h>
#include<conio.h>
void reverse(char []);
int main()
{
	char s[100];
	gets(s);
	reverse(s);
	getch();
}

void reverse(char s[])
{
	int i,j;
	for(i=0;s[i];i++);
	
	for(j=1;j<=i;j++)
		printf("%c",s[i-j]);
}
