#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 5


bool ownStrStr(char *str1,char *str2);

int main(int argc, char *argv[])
{
	char first[MAX],second[MAX];


	puts("Enter the string");
	scanf("%5s",&first);		//change array lenght HERE!!!
	puts("Enter the string");
	scanf("%5s",&second);		//and HERE!
	
	if(ownStrStr(first,second))
	puts("They are same");
	else
	puts("Not identical");
	
	return 0;
}

bool ownStrStr(char *first,char *second)
{	
	bool caseSensetive=0;
	bool trig=1;
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
	return 0;
	
	if((strstr(first,second))==0&&(!caseSensetive||(!trig)))	
	return 0;
	else if(strstr(first,second)||caseSensetive&&trig)
	return 1;
}
