/*This program is prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        int k=5;
        while(k>i)
        {
            printf(" ");
            k--;
        }
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n\t\t23CS041_DHRUV_LOKADIYA");
    return 0;
}

