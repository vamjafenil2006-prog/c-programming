#include<stdio.h>

float main()
{
float num1,num2,sum,diff,multi,divide;

printf("enter number1: ");
scanf("%f", &num1);

printf("enter number2: ");
scanf("%f", &num2);

sum = num1+num2;
diff = num1-num2;
multi = num1*num2;
divide = num1/num2;

printf("sum of given numbers is %f\n",sum);
printf("difference of given numbers is %f\n",diff);
printf("multiplication of given numbers is %f\n",multi);
printf("division of given numbers is %f\n",divide);

return 0;

}
