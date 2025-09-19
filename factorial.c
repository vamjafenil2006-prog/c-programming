#include <stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
      sum=sum+i;
    }
    printf("The sum of numbers till n is %d",sum);
    return 0;
}
