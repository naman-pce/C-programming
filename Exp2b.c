#include<stdio.h>

int main()
{
    float basic, gross, deduction, net;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    gross = basic + 0.50 * basic + 0.10*basic;

    deduction = 0.07 * gross + 0.05*basic;
    net = gross - deduction;

    printf("Gross Salary = %2f\n", gross);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
