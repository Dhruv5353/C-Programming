#include<stdio.h>

int main ()

{
    int i,arr[25],even=0,odd=0,p=0,n=0;

    for(i=0;i<25;i++)
    {
        printf("Enter %d element of an Array : ",i+1);
        scanf("%d",&arr[i]);

    if(arr[i]%2==0)
        even++;
    else
        odd++;

    if(arr[i]>=0)
        p++;
    else
        n++;
    }

    printf("\n\nThe total Even number is %d",even);
    printf("\nThe total Odd number is %d",odd);
    printf("\nThe total Positive number is %d",p);
    printf("\nThe total Negative number is %d",n);

    printf("\n\n23CS041_CS1");

    return 0;

}
