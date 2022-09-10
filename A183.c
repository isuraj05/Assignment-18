#include<stdio.h>
#include<conio.h>
int compare(char [],char[]);
int main()
{
	char s[100],s2[100];
	int cmp;
	gets(s);
	gets(s2);
	cmp=compare(s,s2);
	if(cmp==1)
	    printf("The string is in the opposite of dictionary order");
	else
	    if(cmp==0)
	        printf("The string is in the equal order");
	    else
	        printf("The string is in the dictionary order");
	getch();
}

int compare(char s[],char s2[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==s2[i])
		    continue;
		else
		    if(s[i]>s2[i])
		        return 1;
		    else 
		        return -1;
	}
	return 0;
}
