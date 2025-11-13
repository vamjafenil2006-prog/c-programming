#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the str1: ");
    gets(str1);

    strrev(str1);
    printf("Reverse string is: %s",str1);
    return 0;

}