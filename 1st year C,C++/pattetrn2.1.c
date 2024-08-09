#include<stdio.h>
int main()
{
        float Basic_salary, DA, HRA, MA, TA, PF, IT, Gross_salary, Net_salary, Allowances, Deduction;

        printf("\n Enter Your basic salary: ");
        scanf("%f",&Basic_salary);

        DA=Basic_salary*(0.7);
        HRA=Basic_salary*(0.07);
        MA=Basic_salary*(0.02);
        TA=Basic_salary*(0.04);

        PF=Basic_salary*(0.12);
        IT=Basic_salary*(0.18);

        Allowances=DA+HRA+MA+TA;
        Deduction=PF+IT;

        Gross_salary=Basic_salary+Allowances;
        Net_salary=Gross_salary-Deduction;

        printf("\nSr.No. \t\t Input/Outputs \t\t\t Ammount");
        printf("\n  1 \t\t Basic salary  \t\t\t %f",Basic_salary);
        printf("\n  2 \t\t DA of Basic salary  \t\t %f",DA);
        printf("\n  3 \t\t HRA of Basic salary  \t\t %f",HRA);
        printf("\n  4 \t\t MA of Basic salary  \t\t %f",MA);
        printf("\n  5 \t\t TA of Basic salary  \t\t %f",TA);
        printf("\n  6 \t\t PF of Basic salary  \t\t %f",PF);
        printf("\n  7 \t\t Gross salary  \t\t\t %f",Gross_salary);
        printf("\n  8 \t\t Net salary  \t\t\t %f",Net_salary);





}
