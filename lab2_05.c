#include <stdio.h>

int main()
{
    float gross_sales, discount_rate, discount_amount, net_sales;

    printf("Enter the Gross Sales amount: ");
    scanf("%f", &gross_sales);

    if (gross_sales > 20000.0)
    {
        discount_rate = 0.15;
    }
    else if (gross_sales > 10000.0)
    {
        discount_rate = 0.10;
    }
    else
    {
        discount_rate = 0.05;
    }

    discount_amount = gross_sales * discount_rate;
    net_sales = gross_sales - discount_amount;

    printf("Gross Sales: %.2f\n", gross_sales);
    printf("Discount Rate: %.0f%%\n", discount_rate * 100);
    printf("Discount Amount: %.2f\n", discount_amount);
    printf("Net Sales: %.2f\n", net_sales);

    return 0;
}