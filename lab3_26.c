#include<stdio.h>
int main()
{
    int num,original,sum=0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);

    original = num;
    while(num>0)
    {
        digit=num%10;
        sum=sum + (digit*digit*digit);
        num=num/10;
    }
    if(sum==original)
        printf("The %d number is armstrong no.\n",original);


    else
        printf("The %d number is not armstrong no.\n",original);


    return 0;

}