#include<stdio.h>
float main()
{
 float c,f;
 printf("Enter the celcius: ");
 scanf("%f",&c);

 f=(1.8*c)+32;
 printf("%fcelcius = %ffahrenheit",c,f);
 return 0;
}