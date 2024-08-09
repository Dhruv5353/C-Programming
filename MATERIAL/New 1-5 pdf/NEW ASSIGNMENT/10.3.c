/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
#include<conio.h>
void main()
{
struct emp
{
char name[10]; int age;
struct emp2
{
char address[50]; float salary;
}b;
}a;
printf("Enter the name of employee : ");
scanf("%s", &a.name);
printf("Enter the age of employee : ");
scanf("%d", &a.age);
printf("Enter the address of employee : ");
scanf("%s", &a.b.address);
printf("Enter the salary of employee : ");
scanf("%f", &a.b.salary);
printf("name : %s", a.name);
printf("\nage : %d", a.age);
printf("\naddress : %s", a.b.address);
printf("\nsalary : %f", a.b.salary);
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
}
