
#include<stdio.h>
float main()
{
 float f,c;
 printf("Enter the value in fahrenheit: ");
 scanf("%f",&f);

 c=5.0/9.0*(f-32.0);
 printf("%.2ffahrenheit=%.2fcelcius",f,c);

 return 0;
}

