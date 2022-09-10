#include<stdio.h>
#include<conio.h>
void rpt(char [],int);
int main()
{
	int i;
	char str[100];
	printf("Enter a string: ");
	fgets(str,100,stdin);
	
	for(i=0;str[i];i++);
	str[i-1]='\0';
	
	rpt(str,100);
	return 0;
	getch();
}

void rpt(char str[], int size)
{
	int i,j,l;
	char c,rpt;
	for(l=0;str[l];l++);
	
	for(i=0;i<l;i++)
	{	
		c=str[i];
		for(j=i;j<l-1;j++)
		{	
			if(c==str[j+1])
			{
				printf("%c ",c);
				break;
			}
		}
	}	
}
