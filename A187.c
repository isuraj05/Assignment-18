#include<stdio.h>
#include<conio.h>
#include<string.h>
void palin(char []);
int main()
{
	char s[100];
	gets(s);
	palin(s);
	getch();
}

void palin(char s[])
{
	int i,j=0,len,k;
	char str[100];
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		    str[i-j]=s[i];
		else
			if(s[i]>='A'&&s[i]<='Z')
			    str[i-j]=s[i]+32;  
			else
				j++;	
	}
	
	len=strlen(str);	
	for(k=1,i=0;i<len;i++)
	{
		if(str[i]==str[len-k])
			k++;
		else
			break;
	}
	if(i==len)
		printf("It is a palindrome string");
	else
		printf("It is not a palindrome string");
}
