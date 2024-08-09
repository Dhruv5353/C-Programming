/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
char *ch; int n;
printf("Enter the number of elements : ");
scanf("%d",&n);
ch=(char *)calloc(n,sizeof(char));
printf("Enter the string before reallocation of memory : ");
scanf("%s",ch);
printf("String you enter using calloc : %s",ch);
printf("\n");
printf("\nEnter the number of elements : ");
scanf("%d",&n);
ch=(char *)realloc(ch,n*sizeof(char));
printf("Enter the string after reallocation of memory : ");
scanf("%s",ch);
printf("String you enter using realloc : %s",ch);
printf("\n\t\t23CS041_DHRUV_LOKADIYA");
return 0;
}

