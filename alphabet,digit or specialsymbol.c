//program to check given input is alphabet,digit or specialsymbol;
#include<stdio.h>
int main()
{
	 char ch;
	printf("enter the number:");
	scanf("%c",&ch);
	if((ch>='A')&&(ch<='z')||(ch>='a')&&(ch<='z'))
	{
		printf("enter the alphabet");
	}
	else if((ch>='0')&&(ch<='9'))
	{
		printf("enter the digit");
	}
	else
	{
		printf("enter special symbol");
	}
	
}
