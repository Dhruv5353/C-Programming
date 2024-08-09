/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n;
float avg, s=0; int *a;
printf("Enter the size : ");
scanf("%d", &n);
a=(int *)malloc(n * sizeof(int));
for(i=0;i<n;i++)
{
printf("Enter the value of element : "); scanf("%d", (a+i));
s = s + *(a+i);
}
avg = s/n;
printf("average is %f", avg);
free(a);
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
return 0;}

