/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
void display();
int main()
{
void (*func_ptr)();
func_ptr=display;
printf("Address of functions display is %u\n",func_ptr); (*func_ptr)();
return 0;
}
void display()
{
puts("By helping others, we help overselves!!");
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
}
