#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the digit to count in sum:");
    scanf("%d",&n);

    float num,sum=0,mean;
    printf("Enter the %d numbers: \n",n);

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
