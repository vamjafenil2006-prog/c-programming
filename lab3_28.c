#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=1;i<= num/2 ;i++){
        if( num % i == 0)
           {
              sum=sum+i;
           }
       }
    if(sum==num)
      printf(" %d is a perfect no.",num);
    else
      printf(" %d is not a perfect no.",num);
    return 0;
}