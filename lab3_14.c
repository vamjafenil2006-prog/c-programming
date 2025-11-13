#include <stdio.h>
int main()
{
    int i,n=10;
    float num,sum=0,mean;
    printf("Enter the 10 numbers: \n");

    for(i=1;i<=n;i++)
    {
        scanf("%f",&num);
        sum=sum+num;
    }

    mean = sum / n;

    printf("Sum=%.2f\n",sum);
    printf("Mean = %.2f\n",mean);
    return 0;

}