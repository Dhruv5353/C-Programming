/*This Program is Prepared by 23CS041_DHRUV_LOKADIYA*/
#include<stdio.h>
int main()
{
        int a,b,temp;

        printf("********Before Swapping********");
        printf("\nEnter first num:");
        scanf("%d",&a);
        printf("\nEnter second num:");
        scanf("%d",&b);

        printf("\n\n ********After Swapping********");

        temp = a;
        a = b;
        b = temp;

        printf("\n First num become:%d",a);
        printf("\n Second num become:%d",b);
        printf("\n 23CS041_CS1");
        return 0;
}

