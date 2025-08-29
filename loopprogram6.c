#include<stdio.h>
void main()
{
int n, i=0;
printf("enter the value of n:");
scanf("%d", &n);
do
{
i++;
printf("%d\n" , 2*i);
}
while (i<n);
return 0;
}
