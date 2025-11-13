
#include<stdio.h>
int main()
{
    float dol,pound,rs;
    printf("Enter the dollar: ");
    scanf("%f",&dol);

    pound=dol*48/70;
    printf("The %f$ is equal to %fpound",dol,pound);

    return 0;

}