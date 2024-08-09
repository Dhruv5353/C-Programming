/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
    int i=1,j,k,m,n,x;
    do
{
        k=4;
        m=65;
        do
        {
            printf(" ");
            k--;
        }
        while(k>=i);
        j=1;
        do
        {
            n=(2*i)-1;
            printf("%c",m);
            x=(n+1)/2;
            if(j<x)
                m++;
            else
                m--;
            j++;
 }
  while(j<=n);
       i++;
        printf("\n");
 }
 while(i<=4);
 printf("\n\t\t23CS041_DHRUV_LOKADIYA");
return 0;
}

