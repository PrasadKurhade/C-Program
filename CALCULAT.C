#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the First number = ");
	scanf("%d",&a);
	printf("\nEnter the second number = " );
	scanf("%d",&b);
	printf("\nEnter the third number = " );
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
		printf("\n The first number is big ");
		}
		else
		{
		printf("\nthe third number is big ");
		}
	}

	else
	{
		if(b>c)
		{
		printf("\nthe second number is big");
		}
		else
		{
		printf("\nthe third number is big");
		}
	}

	getch();

}