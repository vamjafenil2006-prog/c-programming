#include<stdio.h>
int main()
{
    int num,original,reversed = 0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    original = num ;
     while(num>0)
     {
         digit=num%10;
         reversed=reversed*10+digit;
         num=num/10;

     }
     if(original == reversed){
        printf("%d is a palidrome number.\n",original);

     }
     else{
        printf("%d is NOT palidrome number.\n",original);
     }
     return 0;
}