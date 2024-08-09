#include<stdio.h>
#include<conio.h>
int main()
{

	int y=10,p=20,calculate;
	clrscr();


	calculate= ++y + y++ + --y + ++p - --p - --p;

	printf("total= %d", calculate);
	getch();
	return 0;
}