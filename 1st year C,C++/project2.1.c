/*This Program is Prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
        int Total_Population=80000,Number_of_Literate,Number_of_Men,Number_of_Literate_Men,Number_of_illiterate_Men,Number_of_Women,Number_of_Literate_Women,Number_of_illiterate_Women;

        Number_of_Men=Total_Population*(0.52);
        Number_of_Women=Total_Population-Number_of_Men;
        Number_of_Literate_Men=Total_Population*(0.35);
        Number_of_Literate=Total_Population*(0.48);
        Number_of_Literate_Women=Number_of_Literate-Number_of_Literate_Men;
        Number_of_illiterate_Men=Number_of_Men-Number_of_Literate_Men;
        Number_of_illiterate_Women=Number_of_Women-Number_of_Literate_Women;

        printf("\n Sr.No. \t Get Outcome \t\t\t  Value");
        printf("\n 1 \t Total_Population \t\t\t %d", Total_Population);
        printf("\n 2 \t Number_of_Literate \t\t\t %d", Number_of_Literate);
        printf("\n 3 \t Number_of_Men \t\t\t\t %d",  Number_of_Men);
        printf("\n 4 \t Number_of_Literate_Men \t\t %d", Number_of_Literate_Men);
        printf("\n 5 \t Number_of_illiterate_Men \t\t %d", Number_of_illiterate_Men);
        printf("\n 6 \t Number_of_Women \t\t\t %d", Number_of_Women);
        printf("\n 7 \t Number_of_Literate_Women \t\t %d", Number_of_Literate_Women);
        printf("\n 8 \t Number_of_illiterate_Women \t\t %d", Number_of_illiterate_Women);
        printf("\n 23CS041_CS1");
        return 0;
}
