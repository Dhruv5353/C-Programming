/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
void main()
{
union library
{
char title[20]; double accession; float price;
int flag;
}a1,a2,f;
printf("Accession number : ");
scanf("%lf", &a1.accession);
printf("Enter the title : ");
scanf("%s", &a1.title);
printf("Enter the price : " );
scanf("%f", &a1.price);
printf("Flag = ");
scanf("%d", &f.flag);
printf("	\n");
if(f.flag==1)
{
printf("Book is issued");
}
else
{
printf("Book is not issued");
}
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
}

