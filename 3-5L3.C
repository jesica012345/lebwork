#include<stdio.h>
#include<conio.h>

void main()
{

	int a=21,b=10,c=30,d=111;
	clrscr();
	if(d<c)
	{
		if(d>a)
		{
			printf("d is maximum.");
		}
		else
		{
			printf("a is maximum.");
		}
	}
	else
	{
		if(d>b)
		{
			printf("d is maximum.");
		}
		else
		{
			printf("b is maximum.");
		}
	}
	getch();
}
