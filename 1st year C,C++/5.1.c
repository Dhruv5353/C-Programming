#include<stdio.h>

int main()
{

        float qt,Price,op,dis,New_output;

        printf("\nEnter the Quantity: ");
        scanf("%f", &qt);

        printf("\nEnter price per item: ");
        scanf("%f", &Price);

        op=qt*Price;
        printf("\nOutput : %f",op);

        if(op>=1000)
        {
                printf("\n************Congratulations*************");
                dis=op/10;
                New_output=op-dis;
                printf("\nThe discount is 10",dis);
                printf("\nNew output : %f",New_output);
        }

        return 0;
}

