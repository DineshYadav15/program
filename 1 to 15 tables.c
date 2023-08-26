//write a program to 1 to 15 tables
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n %d * %d = %d",i,j,i*j);
		}
	}
	
}
