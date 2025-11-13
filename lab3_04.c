#include<stdio.h>
void main ()
{
    int n, i;
    printf("enter the value of n: ");
    scanf("%d", &n);

    printf("The %d natural number is : \n",n);
    for(i=1;i<=n;i++)
    {

     printf("%d",i);
    }
    return 0;
}