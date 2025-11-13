#include <stdio.h>
#define EXCHANGE_RATE 48.0
int main()
{
    float rupees, dollars;
    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / EXCHANGE_RATE;
    printf("%.2f Rupees is equal to %.2f Dollars\n", rupees, dollars);
    return 0;
}