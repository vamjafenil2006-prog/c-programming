#include <stdio.h>
#define EXCHANGE_RATE 48.0
int main()
{
    float dollars, rupees;
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * EXCHANGE_RATE;
    printf("%.2f Dollars is equal to %.2f Rupees\n", dollars, rupees);
    return 0;
}