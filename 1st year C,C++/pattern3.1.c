#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
float L, T, G;

        printf("Enter value of length=");
        scanf("%f",&L);

        printf("Please enter the value of gravity=");
        scanf("%f",&G);

        T=2*PI*(sqrt(L/G));
        printf("Time period is : %f",T);

        return 0;



}
