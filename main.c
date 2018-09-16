#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 5



int main(int argc, char *argv[])
{
	char first[MAX],second[MAX];
	bool caseSensetive=0;
	bool trig=1;

	puts("Enter the string");
	scanf("%5s",&first);
	puts("Enter the string");
	scanf("%5s",&second);	
	int i;
	for(i=0;i<MAX;i++)
	{
		if(isupper(first[i])&&islower(second[i]))
		{
			if((first[i]+32)==second[i])
			{
				caseSensetive=1;
			}
			else 
			{
				trig=0;
				break;
			}
		}
		else if(islower(first[i])&&isupper(second[i]))
		{
			if((first[i]-32)==second[i])
			{
				caseSensetive=1;
			}
			else
		 	{
				trig=0;
				break;
			}
		}
	}
	if(strlen(first)!=strlen(second))
	
	{
		puts("Not identical");
		return 0;
	}
	
	if((strstr(first,second))==0&&(!caseSensetive||(!trig)))	
	puts("Not identical");
	else if(strstr(first,second)||caseSensetive&&trig)
	puts("They are same");

	

	return 0;
}
