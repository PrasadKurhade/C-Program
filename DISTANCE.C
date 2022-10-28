#include<stdio.h>
#include<conio.h>
void main()
{
	float kilometer,meter,cm,inch,feet;
	clrscr();
	printf("enter the distance in kilometer=");
	scanf("%f",&kilometer);
	meter=kilometer*1000;
	cm=meter*100;
	inch=cm/2.54;
	feet=inch/12;
	printf("\nmeter=%f",meter);
	printf("\ncm=%f",cm);
	printf("\ninch=%f",inch);
	printf("\nfeet=%f",feet);
	getch();

}