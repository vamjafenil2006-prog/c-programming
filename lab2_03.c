#include <stdio.h>

int main()
{
    float gross_salary, allowances, deductions, net_salary;

    printf("Enter the Gross Salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary > 10000.0)
    {
        allowances = gross_salary * 0.10;
        deductions = gross_salary * 0.03;
    }
    else if (gross_salary > 5000.0)
    {
        allowances = gross_salary * 0.07;
        deductions = gross_salary * 0.02;
    }
    else
    {
        allowances = 0.0;
        deductions = 0.0;
    }

    net_salary = gross_salary + allowances - deductions;

    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Total Allowances: %.2f\n", allowances);
    printf("Total Deductions: %.2f\n", deductions);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}