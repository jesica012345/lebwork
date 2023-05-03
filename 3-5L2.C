#include<stdio.h>
#include<conio.h>

void main()
{
	int a=50,b=44,c=70;
	clrscr();
	if (c>a)
	{
		if(c>b)
		{
		printf("b is minimum.");
		}
		else
		{
		printf("c is minimum.");
		}
	}
	else
	{
		if(a>b)
		{
		printf("b is minimum.");
		}
		else
		{
		printf("c is minimum.");
		}
	}
	getch();

}

