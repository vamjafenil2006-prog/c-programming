
#include <stdio.h>
int main()
 {
    int gross_sale;
    printf("enter gross sales: ");
    scanf("%d",&gross_sale);
    printf("Net Sales is %d",gross_sale-10*gross_sale/100);
    return 0;
}
