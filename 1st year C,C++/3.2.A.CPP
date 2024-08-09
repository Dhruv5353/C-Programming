#include<stdio.h>
#include<conio.h>
void main()
{
	int y,r1,r2,r3,r4;
	clrscr();

	printf("enter y =");
	scanf("%d",&y);
	r1=++y;
	r2=--y;
	r3=y++;
	r4=y--;

	printf("\n \tSr.No.\t\tInstructions\t\t Yellow");
	printf("\n \t1.\t\tRajiv has \t\t%d ball",r1);
	printf("\n \t2.\t\tPreet has \t\t%d ball",r2);
	printf("\n \t3.\t\tRaj has \t\t%d ball",r3);
	printf("\n \t4.\t\tRitul has \t\t%d ball",r4);

	getch();

}