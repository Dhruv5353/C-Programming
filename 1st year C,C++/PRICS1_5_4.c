# include <stdio.h>
# include <math.h>
int main()
{
    float a, b, c, D, root1, root2, imaginary;
    printf("For ax^2+bx+c=0,\n");
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    D = pow(b,2)-(4*a*c);
    switch (D>0)
    {
        case 1 :
            printf("The roots are real and distinct.\n");
            root1=(-b+sqrt(D))/(2*a);
            root2=(-b-sqrt(D))/(2*a);
            printf("The roots of the quadratic equation are %.2f and %.2f.", root1, root2);
            break;
        case 0 :
            switch (D<0)
            {
                case 1 :
                    printf("The roots are imaginary.\n");
                    imaginary= sqrt(-D)/(2*a);
                    root1=root2=-b/(2*a);
                    printf("The roots of the quadratic equation are %.2f+i%.2f and %.2f-i%.2f.", root1, imaginary, root2, imaginary);
                    break; 
                case 0:
                    printf("The roots are real and equal.\n");
                    root1=root2=-b/(2*a);
                    printf("The roots of the quadratic equation are %.2f and %.2f.", root1, root2);
                    break;
            }
    }
    return 0;
}