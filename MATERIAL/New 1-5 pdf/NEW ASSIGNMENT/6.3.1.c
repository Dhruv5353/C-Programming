/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    printf("\n\t\t23CS041_DHRUV_LOKADIYA");
      return 0;
}

